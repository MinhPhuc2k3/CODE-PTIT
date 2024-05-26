//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int v, e, u;
vector<int> g[1001];
int visited[1001];

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u]=1;
    while(!q.empty())
    {
        int tmp = q.front();q.pop();
        cout << tmp<<" ";
        for(int x:g[tmp])
        {
            if(!visited[x]) {
                q.push(x);
                visited[x]=1;
            }
        }
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
        cin>>v>>e>>u;
        memset(visited,0,sizeof(visited));
        memset(g,0,sizeof(g));
        for(int i=0; i<e; i++)
        {
            int x, y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        bfs(u);
        cout<< endl;
    }
}

