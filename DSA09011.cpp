//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

int a[501][501];
int visited[501][501];
int n, m;

ii x[8]={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
void DFS(int i, int j)
{
    visited[i][j]=1;
    for(int k = 0; k<8; k++)
    {
        int in = x[k].first+i;
        int jn = x[k].second+j;
        if(in>-1&&in<n&&jn>-1&&jn<m&&!visited[in][jn]&&a[in][jn])
        {
            DFS(in,jn);
        }
    }
}

void read()
{
    cin>>n>>m;
    memset(visited,0,sizeof(visited));
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++) cin>>a[i][j];

}

void solve()
{
    read();
    int cnt = 0;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(!visited[i][j]&&a[i][j])
            {
                DFS(i,j);
                cnt++;
            }
    cout << cnt;
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
