#include<bits/stdc++.h>
using namespace std;

int v,e;
vector<int> g[100001];
int visited[1001];
vector<pair<int,int>> edge;

void DFS(int u,int x,int y)
{
    visited[u]=1;
    for(int v:g[u])
    {
        if(!((v==x&&u==y)||(v==y&&u==x))&&!visited[v])
        {
            DFS(v,x,y);
        }
    }
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        cin>>v>>e;
        memset(g,0,sizeof(g));
        memset(visited,0,sizeof(visited));
        edge.clear();
        for(int i=0; i<e; i++)
        {
            int x, y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
            edge.push_back({x,y});
        }
        int tplt = 0;
        for(int i=1; i<=v; i++)
        {
            if(!visited[i])
            {
                DFS(i,0,0);
                tplt++;
            }
        }
        int res=0;
        for(pair<int,int> it:edge)
        {
            int cnt=0;
            memset(visited,0,sizeof(visited));
            for(int i=1; i<=v; i++)
            {
                if(!visited[i])
                {
                    DFS(i,it.first,it.second);
                    cnt++;
                }
            }
            if(cnt>tplt) cout <<it.first<< " "<<it.second<<" ";
        }
        cout << endl;
    }
}
