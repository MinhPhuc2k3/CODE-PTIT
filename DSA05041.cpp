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
        string s;
        cin>>s;
        int n = s.size();
        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int i=n; i>0; i--)
        {
            for(int j=i; j<=n; j++)
            {
                if(i==j) dp[i][j]=1;
                else{
                    if(s[i-1]==s[j-1])
                    {
                        if(i+1<=j-1) dp[i][j]=dp[i+1][j-1]+2;
                        else dp[i][j]=2;
                    }
                    else{
                        if(i+1<=j-1) dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
                        else dp[i][j]=1;
                    }
                }
            }
        }
        cout << n - dp[1][n];
        cout << endl;
    }
}

