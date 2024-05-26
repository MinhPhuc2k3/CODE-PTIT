//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int v, e, s, t;
vector<int> g[1001];
int visited[1001];
int p[1001];

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u]=1;
    while(!q.empty())
    {
        int tmp=q.front();
        q.pop();
        for(int x:g[tmp])
        {
            if(!visited[x])
            {
                p[x]=tmp;
                visited[x]=1;
                q.push(x);
            }
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--)
    {
        memset(g,0,sizeof(g));
        cin>>v>>e;
        for(int i=0; i<e; i++)
        {
            int x, y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        int q;
        cin>>q;
        while(q--)
        {
            cin>>s>>t;
            memset(visited,0,sizeof(visited));
            memset(p,0,sizeof(p));
            BFS(s);
            if(p[t]) cout << "YES";
            else cout << "NO";
            cout<< endl;
        }
    }
}

