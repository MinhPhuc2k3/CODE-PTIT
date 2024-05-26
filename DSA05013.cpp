//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
ll dp[100001];
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
        ll s=1;
        memset(dp,0,sizeof(dp));
        dp[1]=1;
        dp[0]=1;
        for(int i=2; i<=k; i++)
        {
            dp[i]=s+1;
            s+=dp[i];
        }
        for(int i=k+1; i<=n; i++)
        {
            for(int j=i-1; j>=i-k; j--)
            {
                dp[i]+=dp[j]%mod;
                dp[i]%=mod;
            }
        }
        cout<< dp[n];
        cout<< endl;
    }
}
