//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, x, y, z;
        cin>>n>>x>>y>>z;
        int dp[n+1];
        dp[1]=x;
        for(int i=2; i<=n; i++)
        {
            if(i%2==0)
            {
                dp[i]=min(dp[i-1]+x,dp[i/2]+z);
            }
            else
            {
                dp[i]=min({dp[i-1]+x,dp[i/2+1]+z+y});
            }
        }
        cout << dp[n];
        cout << endl;
    }
}

