#include <bits/stdc++.h>
using namespace std;

vector<int> g[1001];
int visited [1001];
int par[1001];
int n, m;
int u, v;
void DFS(int u)
{
    visited[u]=1;
    for(int x:g[u])
    {
        if(!visited[x])
        {
            par[x] = u;
            DFS(x);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(par,0,sizeof(par));
        memset(visited,0,sizeof(visited));
        memset(g,0,sizeof(g));
        cin>>n>>m;
        cin>>u>>v;
        for(int i=0; i<m; i++)
        {
            int x, y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        DFS(u);
        vector<int> path;
        if(visited[v])
        {
            while(v!=u)
            {
                path.push_back(v);
                v=par[v];
            }
            path.push_back(v);
            reverse(path.begin(),path.end());
            for(auto x:path) cout << x<<" ";
            cout << endl;
        }
        else cout << -1<<endl;
    }
}
