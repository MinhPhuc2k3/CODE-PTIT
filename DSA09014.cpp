//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

vector<int> g[1001];
int n, m;
int visited[1001];

bool DFS(int u, int par)
{
    visited[u]=1;
    for(int x:g[u])
    {
        if(!visited[x])
        {
            if(DFS(x,u)) return true;
        }
        else if(x!=par) return true;
    }
    return false;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        memset(g,0,sizeof(g));
        memset(visited,0,sizeof(visited));
        cin>>n>>m;
        for(int i=0; i<m; i++) {
            int x, y; cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        bool check = false;
        for(int i=1; i<=n; i++)
        {
            if(!visited[i])
            {
                bool tmp = DFS(i,0);
                if(tmp) check = true;
            }
        }
        if(check) cout << "YES";
        else cout << "NO";
        cout<< endl;
    }
}
