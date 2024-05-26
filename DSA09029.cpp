//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

int n, m, visited[11];
vi g[16];
bool check ;

void DFS(int u, int cnt)
{
    if(cnt==n) check = true;
    visited[u]=1;
    for(int x:g[u])
    {
        if(!visited[x])
        {
            DFS(x,cnt+1);
            visited[x] = 0;
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
        cin>>n>>m;
        memset(g,0,sizeof(g));
        for(int i=0; i<m; i++)
        {
            int x, y;
            cin>>x>>y;
            g[y].push_back(x);
            g[x].push_back(y);
        }
        check = false;
        for(int i=1; i<=n; i++)
        {
            memset(visited,0,sizeof(visited));
            DFS(i,1);
        }
        cout << check;
        cout<< endl;
    }
}
