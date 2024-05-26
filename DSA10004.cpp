//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int v, e;
vector<int> g[1001];
int visited[1001];
int res;

void DFS(int u, int i)
{
    visited[u]=1;
    for(int x:g[u])
    {
        if(!visited[x]) {
            DFS(x,i);
            if(!res) res=1;
        }
        else if(x==i) res=2;
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
        cin>>v>>e;
        memset(g,0,sizeof(g));
        res=0;
        for(int i=0;i<e; i++)
        {
            int x, y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        for(int i = 1; i<=v; i++)
        {
            memset(visited,0,sizeof(visited));
            DFS(i,i);
            if(res==2) break;
        }
        cout <<res;
        cout<< endl;
    }
}

