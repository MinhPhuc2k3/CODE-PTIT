//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int v,e; vector<int> g[1001];
int u;
int visited[1001];

void dfs(int u)
{
    visited[u]=1;
    cout << u<<" ";
    for(auto x:g[u])
    {
        if(!visited[x]) dfs(x);
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
        cin>>v>>e>>u;
        memset(visited,0,sizeof(visited));
        memset(g,0, sizeof(g));
        for(int i=0; i< e; i++)
        {
            int x, y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        dfs(u);
        cout<< endl;
    }
}

