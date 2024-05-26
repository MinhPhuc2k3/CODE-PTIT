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
    int n,m, l;
    string x, y, z;
    while(t--)
    {
        cin>>n>>m>>l;
        cin>>x>>y>>z;
        int dp[n+1][m+1][l+1];
        memset(dp,0,sizeof(dp));
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                for(int k=1; k<=l; k++)
                {
                    if(x[i-1]==y[j-1]&&y[j-1]==z[k-1])
                        dp[i][j][k]=dp[i-1][j-1][k-1]+1;
                    else dp[i][j][k]=max({dp[i][j][k-1],dp[i][j-1][k],dp[i-1][j][k]});
                }
            }
        }
        cout << dp[n][m][l];
        cout << endl;
    }
}

