//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

int n, m,visited[1001];
vi g[999999], path;

bool DFS(int u, int par)
{
    visited[u]=1;
    path.push_back(u);
    for(int x:g[u])
    {
        if(!visited[x])
        {
            if(DFS(x,u)) return true;
            path.pop_back();
        }
        else if(x==1&&par!=1)
        {
            return true;
        }
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
        memset(g,0,sizeof(g));
        memset(visited,0,sizeof(visited));
        path.clear();
        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
            int x, y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        for(int i=1; i<=n; i++)
        {
            sort(all(g[i]));
        }
        if(DFS(1,0))
        {
            for(int i=0; i<path.size(); i++)
            {
                cout << path[i]<<" ";
            }
            cout << 1;
        }
        else cout << "NO";
        cout<< endl;
    }
}
