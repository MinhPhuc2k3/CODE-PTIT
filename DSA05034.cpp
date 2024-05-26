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
        int n, k;
        cin>>n>>k;
        ll dp[n+1]={0};
        dp[1]=dp[0]=1;
        for(int i=2; i<=n; i++)
        {
            for(int j=max(0,i-k); j<i; j++)
            {
                dp[i]+=dp[j]%mod;
                dp[i]%=mod;
            }
        }
        cout << dp[n];
        cout<< endl;
    }
}
