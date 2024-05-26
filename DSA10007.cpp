//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

vector<int> g[10001];
int visited[1001];
int n, m, u;
vector<pair <int, int >> tree;
void BFS(int u)
{
    visited[u]=1;
    queue <int> q;
    q.push(u);
    while(!q.empty())
    {
        int tmp = q.front();
        q.pop();
        for(int x:g[tmp])
        {
            if(!visited[x])
            {
                q.push(x);
                tree.push_back({tmp,x});
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
        memset(g,0,sizeof(g));
        memset(visited,0,sizeof(visited));
        tree.clear();
        cin>>n>>m>>u;
        for(int i=0; i<m; i++)
        {
            int x, y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        BFS(u);
        bool check = true;
        for(int i=1; i<=n; i++)
        {
            if(!visited[i]) check = false;
        }
        if(!check) cout << -1<<endl;
        else
        {
            for(int i=0; i<tree.size(); i++)
            {
                cout << tree[i].first<<" "<<tree[i].second<<endl;
            }
        }
    }
}
