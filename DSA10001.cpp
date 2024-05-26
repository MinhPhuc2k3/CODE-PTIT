//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

int n,m;
int visited[501][501];
ii s, d;
ii x[4] = {{-1,0},{0,-1},{0,1},{1,0}};

void DFS(ii u, int c,  ii pre = {0,0})
{
    if(c>2) return;
    visited[u.first][u.second]=1;
    for(int i=0; i<4; i++)
    {
        ii t={u.first+x[i].first,u.second+x[i].second};
        if(t.first>-1&&t.first<n&& t.second>-1&&t.second<m&&!visited[t.first][t.second])
        {
            if((pre.first==0&&pre.second==0)||x[i]==pre) DFS(t,c,x[i]);
            else DFS(t,c+1,x[i]);
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
        memset(visited,0,sizeof(visited));
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++) {
                char c; cin>>c;
                if(c=='S') s = {i,j};
                if(c=='T') d = {i,j};
                visited[i][j]=0;
                if(c=='*') visited[i][j]=1;
            }
        DFS(s,0);
        if(!visited[d.first][d.second]) cout << "NO";
        else cout << "YES";
        cout<< endl;
    }
}
