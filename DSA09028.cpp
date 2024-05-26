//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int n, m, ma;
vector<int> g[1001];
int color[1001];
int res;

void DFS(int u)
{
    int havecolor[10]={0}, col;
    for(int x:g[u])
    {
        havecolor[color[x]]=1;
    }
    for(int i=1; i<=n; i++)
    {
        if(!havecolor[i])
        {
            col = i;
            break;
        }
    }
    color[u]= col;
    res = max(col,res);
    sort(all(g[u]), [](int x, int y)->bool
         {
             return g[x].size()>=g[y].size();
         });
    for(int x:g[u])
    {
        if(!color[x]) DFS(x);
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
        cin>>n>>m>>ma;
        memset(g,0,sizeof(g));
        memset(color,0,sizeof(color));
        for(int i=0; i<m; i++)
        {
            int x, y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        res = 0;
        for(int i=1; i<=n; i++)
        {
            if(!color[i]) DFS(i);
        }
        if(res>ma) cout << "NO";
        else cout << "YES";
        cout<< endl;
    }
}
