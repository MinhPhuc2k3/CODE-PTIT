//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

int color[1001];
vi g[1001];
int n, m;


bool DFS(int u, int par)
{
    if(par==-1||color[par]==1) color[u]=1;
    else color[u]=2;
    for(int x:g[u])
    {
        if(!color[x])
        {
            if(!DFS(x,u)) return false;
        }
        else if(x!=par&&color[x]==color[u]) return false;
    }
    return true;
}

bool check()
{
    for(int i=1; i<=n; i++)
    {
        if(!color[i])
        {
            if(!DFS(i,-1)) return false;
        }
    }
    return true;
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
        memset(color,0,sizeof(color));
        memset(g,0,sizeof(g));
        for(int i=0; i<m; i++)
        {
            int x, y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        if(check()) cout << "YES";
        else cout << "NO";
        cout<< endl;
    }
}
