//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
const int MAX=1e6;

int n, a[MAX+1];ll dp[MAX+1];

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        memset(dp,0,sizeof(dp));
        cin>>n;
        for(int i=1; i<=n; i++) cin>>a[i];
        dp[0]=0;
        for(int i=1; i<=n; i++)
        {
            dp[i]=max(dp[i-1],dp[i-2]+a[i]);
        }
        cout << dp[n];
        cout<< endl;
    }
}

