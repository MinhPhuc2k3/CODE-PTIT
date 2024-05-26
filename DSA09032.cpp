//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

vi g[100001];
int n, m;
int visited[100001];
int cnt;
void BFS(int u)
{
    visited[u]=1;
    cnt++;
    for(int x:g[u])
    {
        if(!visited[x])
        {
            BFS(x);
        }
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
        int res = 0;
        memset(visited,0,sizeof(visited));
        memset(g,0,sizeof(g));
        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
            int x, y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        //int cnt = 0;
        for(int i=1; i<=n; i++)
        {
            if(!visited[i]){cnt=0;
                BFS(i);

                res=max(res,cnt);
            }
        }
        cout << res<< endl;
    }
}
