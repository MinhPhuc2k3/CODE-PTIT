//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

vector<int> g[1001];
vector<int> t_g[1001];
int visited[1001];
int n,m;
stack<int> st;
void nhap()
{
    memset(g,0,sizeof(g));
    memset(t_g,0,sizeof(t_g));
    memset(visited,0,sizeof(visited));
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
        t_g[y].push_back(x);
    }
}

void DFS1(int u)
{
    visited[u]=1;
    for(int x:g[u])
    {
        if(!visited[x]) DFS1(x);
    }
    st.push(u);
    return;
}

void DFS2(int u)
{
    visited[u]=1;
    for(int x:t_g[u])
    {
        if(!visited[x]) DFS2(x);
    }
    return;
}

void Kosaraju()
{

    for(int i=1; i<=n; i++)
    {
        if(!visited[i]) DFS1(i);
    }
    memset(visited,0,sizeof(visited));
    int scc = 0;
    while(!st.empty())
    {
        int u = st.top(); st.pop();
        if(!visited[u])
        {
            DFS2(u);
            scc++;
        }
    }
    if(scc>1) cout << "NO";
    else cout << "YES";
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
        nhap();
        Kosaraju();
        cout<< endl;
    }
}