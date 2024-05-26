//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, v;
        cin>>n>>v;
        int c[n+1], a[n+1];
        for(int i=1; i<=n; i++) cin>>a[i];
        for(int i=1; i<=n; i++) cin>>c[i];
        int dp[n+1][v+1];
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=n; j++)
            {
                if(i==0||j==0) dp[i][j]=0;
                else if(j>=a[i]) dp[i][j]=max(dp[i-1][j-a[i]]+c[i],dp[i-1][j]);
                else dp[i][j]=dp[i-1][j];
            }
        }
        cout << dp[n][v];
        cout<< endl;
    }
}
