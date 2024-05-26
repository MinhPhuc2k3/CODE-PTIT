//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

ll dp[1001][1001];
int a[1001][1001];
int v[1001][1001];
int n,m;

ll solve(int i, int j)
{
    if(i>n-1||j>m-1) {
        return 1e18;
    }
    if(i==n-1&&j==m-1) return 0;
    if(v[i][j]) return dp[i][j];
    v[i][j]=1;
    dp[i][j]=min(solve(i+a[i][j],j)+1,solve(i, j+a[i][j])+1);
    return dp[i][j];
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
        for(int i=0; i<n; i++)
            for(int j=0; j<m;j++) dp[i][j]=1e18;
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++) cin>>a[i][j];
        dp[n-1][m-1]=0;
        memset(v,0,sizeof(v));
        if(!a[0][0]) dp[0][0]=-1;
        else solve(0,0);
        if(dp[0][0]==1e18)dp[0][0]=-1;
        cout << dp[0][0];
        cout<< endl;
    }
}

