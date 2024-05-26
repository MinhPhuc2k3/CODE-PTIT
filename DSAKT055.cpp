//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int n,v, a[1001], c[1001];

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>v;
        for(int i=0; i<n; i++)cin>>a[i];
        for(int j=0; j<n; j++)cin>>c[j];
        ll dp[n+1][v+1];
        memset(dp,0,sizeof(dp));
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=v; j++)
            {
                if(a[i]<=j) dp[i][j]=max(dp[i-1][j-a[i]]+c[i], dp[i-1][j]);
                else dp[i][j]=dp[i-1][j];
            }
        }
        cout << dp[n][v];
        cout<< endl;
    }
}

