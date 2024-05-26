//Le Minh Phuc CN02
//Duyet trau
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

vi g[1001];
int n, m;
int visited[1001];

void BFS(int u)
{
    queue <int > q;
    q.push(u);
    visited[u]=1;
    while(!q.empty())
    {
        int tmp = q.front();
        q.pop();
        for(int x:g[tmp])
        {
            if(!visited[x])
            {
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
        memset(visited,0,sizeof(visited));
        memset(g,0,sizeof(g));
        cin>>n>>m;
        for(int i=0; i<m; i++)
        {
            int x, y;
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        int cnt = 0;
        for(int i=1; i<=n; i++)
        {
            if(!visited[i]){
                BFS(i);
                cnt++;
            }
        }
        cout << cnt<< endl;
    }
}
