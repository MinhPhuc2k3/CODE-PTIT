//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
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
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int dp[n];
        for(int i=0; i<n; i++) dp[i]=1;
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(a[j]<=a[i]) dp[i]=max(dp[i],dp[j]+1);
            }
        }
        int m = 0; for(int i=0; i<n; i++) if(m<dp[i]) m=dp[i];
        cout << n-m;
        cout << endl;
    }
}
