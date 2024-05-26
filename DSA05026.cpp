//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int main()
{
    int c, n;
    cin>>c>>n;
    int a[n+1];
    for(int i=1; i<=n; i++) cin>>a[i];
    int dp[n+1][c+1];
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=c; j++)
        {
            if(i==0||j==0) dp[i][j]=0;
            else if(j>=a[i]) dp[i][j]=max(dp[i-1][j-a[i]]+a[i],dp[i-1][j]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    cout << dp[n][c];
}
