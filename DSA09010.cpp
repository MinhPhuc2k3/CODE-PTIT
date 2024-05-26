//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int MAX = 10000;
const int mod=1e9+7;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> pii;

typedef struct edge
{
    int x, y, w;
}edge;

typedef struct UnionFind
{
    vi p, sz;
    UnionFind(int n)
    {
        p.assign(n+1,0); for(int i=1; i<=n; i++) p[i]=i;
        sz.assign(n+1,0); for(int i=1; i<=n; i++) sz[i]=1;
    }
    int Find(int u)
    {
        return (p[u]==u)? u:(u=Find(p[u]));
    }
    bool Union(int x, int y)
    {
        x=Find(x);
        y=Find(y);
        if(x==y) return false;
        if(sz[x]<sz[y])
        {
            swap(x,y);
        }
        sz[x]+=sz[y];
        p[y]=p[x];
        return true;
    }
} UnionFind;

int n, m;
edge g[MAX+1];

void Kruskal()
{
    UnionFind v(n);
    int sz = 0;
    ll d = 0;
    sort(g,g+m,[](edge a, edge b)->bool{
            return a.w<b.w;
         });
    for(int i=0; i<m; i++)
    {
        if(sz==n-1) break;
        if(v.Union(g[i].x,g[i].y))
        {
            sz++;
            d+=(ll)g[i].w;
        }
    }
    cout << d;
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
        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
            cin>>g[i].x>>g[i].y>>g[i].w;
        }
        Kruskal();
        cout<< endl;
    }
}
