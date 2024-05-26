#include <bits/stdc++.h>
#define INF 1e9+7
#define ii pair<int, int>
using namespace std;

int n, m;
vector<ii> g[10001];

int main()
{
    cin>>n>>m;
    int dp[n+1][n+1]={0};
    for(int i=0; i<m; i++)
    {
        int x, y, w;
        cin>>x>>y>>w;
        g[x].push_back(ii(y,w));
        g[y].push_back(ii(x,w));
        dp[x][y]=w;
        dp[y][x]=w;
    }
    
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            if(dp[i][j]==0&&i!=j)
            dp[i][j]=INF;
        }
    }
    for(int k=1; k<=n; k++)
    {
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
            }
        }
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x, y;
        cin>>x>>y;
        cout << dp[x][y]<<endl;
    }
}