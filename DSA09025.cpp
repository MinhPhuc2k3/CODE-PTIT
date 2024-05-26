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

void DFS(int u)
{
    visited[u] = 1;
    for(int x:g[u])
    {
        if(!visited[x])
        {
            p[x]=u;
            DFS(x);
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
        memset(visited,0,sizeof(visited));
        memset(p,0,sizeof(p));
        memset(g,0,sizeof(g));
        cin>>v>>e>>s>>t;
        for(int i=0; i<e; i++)
        {
            int x, y;
            cin>>x>>y;
            g[x].push_back(y);
        }
        DFS(s);
        if(!p[t]) cout << -1;
        else{
            vector<int> ans;
            ans.push_back(t);
            while(p[t]!=s)
                {
                    t=p[t];
                    ans.push_back(t);
                }
                ans.push_back(s);
                for(int i=ans.size()-1; i>=0; i--)
                {
                    cout << ans[i]<<" ";
                }
        }
        cout<< endl;
    }
}

