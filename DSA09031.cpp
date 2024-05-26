#include <bits/stdc++.h>
using namespace std;

int n, k, m, cnt;
int visited[105][105];
typedef pair<int, int> ii;

typedef struct point
{
    int a, b;
    point ()
    {
        a=0;
        b=0;
    }
    point(int u, int v)
    {
        a=u;
        b=v;
    }
}point;

typedef struct edge
{
    point x, y;
    void init(point u, point v)
    {
        x = u;
        y = v;
    }
    bool operator==(const edge e)
    {
        if(x.a==e.y.a&&x.b==e.y.b&&y.a==e.x.a&&y.b==e.x.b) return true;
        if(x.a==e.x.a&&x.b==e.x.b&&y.a==e.y.a&&y.b==e.y.b) return true;
        return false;
    }
} edge;

vector<edge> ex;
vector<ii> cuu;
ii mov[4] = {{0,1},{1,0},{0,-1},{-1,0}};

bool check(int x, int y, int u, int v)
{
    point a(x,y);
    point b(u,v);
    edge e;
    e.init(a,b);
    for(int i=0; i<ex.size(); i++)
    {
        if(ex[i]==e)
        return false;
    }
    return true;
}

void DFS(int x, int y)
{
    if(visited[x][y] == 2) cnt++;
    visited[x][y]=1;
    for(int i=0; i<4; i++)
    {
        int xn = x + mov[i].first;
        int yn = y + mov[i].second;
        if((visited[xn][yn]==2||!visited[xn][yn])&&check(x,y,xn,yn)&&xn>0&&xn<=n&&yn>0&&yn<=n)
        {
            DFS(xn,yn);
        }
    }
}

int main()
{
    cin>>n>>k>>m;
    for(int i=0; i<m; i++)
    {
        point x, y;
        cin>>x.a>>x.b>>y.a>>y.b;
        edge e; e.init(x,y);
        ex.push_back(e);
    }
    for(int i=0; i<k; i++)
    {
        ii a;
        cin>>a.first>>a.second;
        visited[a.first][a.second]=2;
        cuu.push_back(a);
    }
    vector <int> A;
    for(int i=0; i<k; i++)
    {
        cnt=0;
        int x = cuu[i].first, y = cuu[i].second;
        if(visited[x][y]==2)
        {
            DFS(x,y);
            A.push_back(cnt);
        }
    }
    int pre[A.size()] = {0};
    pre[0] = A[0];
    for(int i=1; i<A.size(); i++)
    {
        pre[i] += pre[i-1] + A[i];
    }
    int res = 0;
    for(int i=0; i<A.size()-1; i++)
    {
        res += A[i]*(pre[A.size()-1]-pre[i]);
    }
    cout << res;
}