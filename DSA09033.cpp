//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

vi g[10001];
int visited[10001];
int n, m;

void DFS(int u)
{
    visited[u]=1;
    for(int x:g[u])
    {
        if(!visited[x]) DFS(x);
    }
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
        cin>>n>>m;
        memset(visited,0,sizeof(visited));
        memset(g,0,sizeof(g));
        for(int i=0; i<m; i++)
        {
            int x, y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        DFS(1);
        bool check = true;
        for(int i=1; i<=n; i++)
        {
            if(!visited[i]) check=false;
        }
        if(check) cout << "YES";
        else cout << "NO";
        cout<< endl;
    }
}
