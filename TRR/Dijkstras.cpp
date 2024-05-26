#include <bits/stdc++.h>
#define INF 1e9+7
#define ii pair<int,int>
#define vi vector<int>
using namespace std;

vector<ii> AdjList[1001];
int V, E, s;

void Dijikstra(int s)
{
    vi dist(V+1,INF);
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    pq.push({0,s});
    dist[s]=0;
    while(!pq.empty())
    {
        ii front = pq.top(); pq.pop();
        int d = front.first, u = front.second;
        if(d>dist[u]) continue;
        for(int j = 0; j < (int)AdjList[u].size(); j++)
        {
            ii v = AdjList[u][j];
            if(dist[u]+v.second<dist[v.first])
            {
                dist[v.first] = dist[u] + v.second;
                pq.push(ii(dist[v.first],v.first));
            }
        }
    }
    for(int i=1; i<=V; i++)
    {
        cout << dist[i]<<" ";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(AdjList,0,sizeof(AdjList));
        cin>>V>>E>>s;
        for(int i=0; i<E; i++)
        {
            int x, y, w;
            cin>>x>>y>>w;
            AdjList[x].push_back({y,w});
            AdjList[y].push_back({x,w});
        }
        Dijikstra(s);
        cout << endl;
    }
}