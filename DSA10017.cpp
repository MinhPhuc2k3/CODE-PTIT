#include <bits/stdc++.h>
using namespace std;
const int inf = 1e9+7;
typedef pair<int,int> ii;
int n, m;
struct edge
{
    int x, y, w;
};
vector<edge> g;

bool BellmanFord(int r)
{
    vector<int> d(n+1,1e9+7);
    d[r] = 0;
    for(int i=1; i<n; i++)
    for(edge e:g)
    {
        if(d[e.y]>d[e.x]+e.w)
        {
            d[e.y] = d[e.x] + e.w;
        }
    }
    for(edge e:g)
    {
        if(d[e.y]>d[e.x]+e.w)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        g.clear();
        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
            edge e;
            cin>>e.x>>e.y>>e.w;
            g.push_back(e);;
        }
        bool check = true;
        for(int i=1; i<=n-1; i++)
        {
            if(!BellmanFord(i)) check = false;
        }
        cout << check<< endl;
    }
}