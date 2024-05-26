#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+1];
        for(int i=1; i<=n; i++) cin>>a[i];
        int dp[n+1][k+1];
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=k; j++) dp[i][j]=-mod;
        }
        dp[1][a[1]%k]=1;
        for(int i=2;i<=n; i++)
        {
            for(int j=0; j<k; j++)
            {
                dp[i][j]=max(dp[i-1][(j-a[i]%k+k)%k]+1,dp[i-1][j]);
            }
        }
        /*for(int j=0; j<k; j++)
        {
            for(int i=1; i<=n;i++) cout<< dp[i][j]<< ' ';
            cout << endl;
        }*/
        cout<<dp[n][0]<<endl;
    }
}
