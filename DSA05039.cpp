//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
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
        int a, b;
        cin>>a>>b;
        int dp[a+1][b+1];
        dp[0][0] = 0;
        for(int i=1; i<=b; i++) dp[0][i]=mod;
        for(int i=1; i<=a; i++) dp[i][0]=mod;
        string s[a+1][b+1]; s[0][0] ="";
        for(int i=1; i<=a; i++)
        {
            for(int j=1; j<=b; j++)
            {
                dp[i][j] = mod;
                for(int k=1; k<=9; k++)
                {
                    if(i-k>=0&&j-k*k>=0&&dp[i-k][j-k*k]!=mod)
                    {
                        if(i>=k&&j>=k*k&&dp[i-k][j-k*k]+1<dp[i][j])
                        {
                            dp[i][j] = dp[i-k][j-k*k] + 1;
                            s[i][j] = to_string(k)+s[i-k][j-k*k];
                        }

                    }
                }
            }
        }
        if(dp[a][b]==mod) cout << -1;
        else
        {
            cout << s[a][b];
        }
        cout<< endl;
    }
}
