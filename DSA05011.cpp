//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

ll dp[101][50001];
int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int i=1; i<=100; i++)
    {
        for(int j=1; j<=min((ll)pow(10,i)-1, (ll)50000); j++)
        {
            if(i==1) dp[i][j]=1;
            else
            {
                for(int k=0; k<=9; k++)
                {
                    dp[i][j] += dp[i-1][j-k];
                    dp[i][j]%=mod;
                }
            }
        }
    }
    while(t--)
    {
        ll n, s;
        cin>>n>>s;
        cout << dp[n][s]<<endl;
    }
}
