//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

typedef struct edge
{
    int x, y;
}edge;

typedef struct UnionFind
{
    vector<int> p, sz;
    UnionFind(int n)
    {
        p.assign(n+1,0);sz.assign(n+1,0);
        for(int i=1; i<=n; i++) p[i]=i;
        for(int i=1; i<=n; i++) sz[i]=1;
    }
    int Find(int x)
    {
        return (p[x]==x)? x:(p[x]=Find(p[x]));
    }
    bool Union(int x, int y)
    {
        x=Find(x); y=Find(y);
        if(x==y) return false;
        if(sz[x]<sz[y]) swap(x,y);
        sz[x]+=sz[y];
        p[y]=x;
        return true;
    }
}UnionFind;

edge g[1000001];
int n,m;

bool check()
{
    UnionFind v(n);
    for(int i=0; i<m; i++)
    {
        if(!v.Union(g[i].x,g[i].y)) return true;
    }
    return false;
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
        for(int i=0; i<m;i ++)
        {
            cin>>g[i].x>>g[i].y;
        }
        if(check()) cout << "YES";
        else cout << "NO";
        cout<< endl;
    }
}
