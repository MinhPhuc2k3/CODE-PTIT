#include <bits/stdc++.h>
using namespace std;

vector<int> g[1001];
int visited [1001];
int par[1001];
int n, m;
int u, v;
void BFS(int u)
{
    queue <int>q;
    q.push(u);
    visited[u]=1;
    while(!q.empty())
    {
        int tmp = q.front();
        q.pop();
        for(int x:g[tmp])
        {
            if(!visited[x]){
                q.push(x);
                par[x] = tmp;
                visited[x]=1;
            }
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
        BFS(u);
        vector<int> path;
        if(visited[v])
        {
            while(v!=0)
            {
                path.push_back(v);
                v=par[v];
            }
            reverse(path.begin(),path.end());
            for(auto x:path) cout << x<<" ";
            cout << endl;
        }
        else cout << -1<<endl;
    }
}
