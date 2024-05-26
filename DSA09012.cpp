//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

vector<int> g[1001];
int visited[1001];
int n, m;

void nhap()
{
    cin>>n>>m;
    memset(visited,0,sizeof(visited));
    memset(g,0,sizeof(g));
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
}

void DFS(int u)
{
    visited[u]=1;
    for(int x:g[u])
    {
        if(!visited[x]) DFS(x);
    }
}

int tplt()
{
    int cnt = 0;
    for(int i=1; i<=n; i++)
    {
        if(!visited[i])
        {
            DFS(i);
            cnt++;
        }
    }
    return cnt;
}

void solve()
{
    nhap();
    int cnt = tplt();
    for(int i=1; i<=n; i++)
    {
        memset(visited,0,sizeof(visited));
        visited[i]=1;
        if(tplt()>cnt) cout << i<<" ";
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
        solve();
        cout<< endl;
    }
}
