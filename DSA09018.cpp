//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

int n, m;
vector<int> g[1001];
int visited[1001], dfs_id[1001], dfs_low[1001];
bool ap[1001];
int id;

void DFS(int u, int par)
{
    visited[u]=1;
    int child=0;
    dfs_id[u]=dfs_low[u]=++id;
    for(int x:g[u])
    {
        if(!visited[x])
        {
            if(par==0) child++;
            DFS(x,u);
            if(dfs_low[x]>=dfs_id[u]) ap[u]=true;
            dfs_low[u]=min(dfs_low[x],dfs_low[u]);
        }
        else if(par!=x) dfs_low[u] = min(dfs_low[u],dfs_id[x]);
    }
    if(par==0) ap[u]=(child>1);
}

void read()
{
    cin>>n>>m;
    memset(visited,0,sizeof(visited));
    memset(g,0,sizeof(g));
    memset(ap,0,sizeof(ap));
    memset(dfs_id,0,sizeof(dfs_id));
    memset(dfs_low,0,sizeof(dfs_low));
    id=0;
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
}

void solve()
{
    read();
    for(int i=1; i<=n; i++)
    {
        if(!visited[i])
        {
            DFS(i,0);
        }
        if(ap[i]) cout << i<<" ";
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
        solve();
        cout<< endl;
    }
}
