#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#define MAX 100
using namespace std;

typedef struct edge
{
    int x, y, w;
    edge(int a, int b, int c)
    {
        x=a;
        y=b;
        w=c;
    }
}edge;

class UnionFind
{
    private:
        int p[MAX]={0}, sz[MAX];
    public:
        UnionFind()
        {
            for(int i=0; i<=MAX; i++)
            {
                p[i]=i;
                sz[i]=1;
            }
        }
        
        int Find(int x)
        {
            return (x==p[x])? x:p[x]=Find(p[x]);
        }
        
        bool Union(int x, int y)
        {
            x = Find(x);
            y = Find(y);
            if(x==y) return false;
            if(sz[x]<sz[y]) swap(x,y);
            p[y]=x;
            sz[x]+=sz[y];
            return true;
        }
        
};

class Graph
{
    private:
        int n, g[MAX][MAX];
        vector<edge> E;
        vector<edge> MST;
        int visited[100];
    public:
        void input();
        void printMST();
};

void Graph::input()
{
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) 
        {
            cin>>g[i][j];
            if(i<j)
            {
                if(g[i][j])
                {
                    edge e(i,j,g[i][j]);
                    E.push_back(e);
                }
            }
        }
    
}

void Graph::printMST()
{
    UnionFind V;
    memset(visited,0,sizeof(visited));
    sort(E.begin(),E.end(),[](edge a, edge b)->bool
    {
        if(a.w==b.w) return a.x<b.x;
        return a.w<b.w;
    });
    int dH = 0;
    for(int i=0; i<E.size(); i++)
    {
        if(MST.size()==n-1) break;
        if(V.Union(E[i].x,E[i].y)) 
        {
            MST.push_back(E[i]);
            dH=dH+E[i].w;
        }
    }
    cout << "dH = "<<dH<<endl;
    for(int i=0; i<MST.size(); i++)
    {
        cout << MST[i].x<<" "<<MST[i].y<<endl;
    }
}

int main()
{
    Graph g;
    g.input();
    g.printMST();
    return 0;
}