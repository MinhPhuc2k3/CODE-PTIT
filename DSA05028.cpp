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
        string s1, s2;
        cin>>s1>>s2;
        int n = s1.size(), m = s2.size();
        int dp[n+1][m+1];
        for(int i=0; i<=n; i++) dp[i][0]=i;
        for(int j=0; j<=m; j++) dp[0][j]=j;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(s1[i-1]==s2[j-1]) dp[i][j]=dp[i-1][j-1];
                else{
                    dp[i][j]=min({dp[i][j-1],dp[i-1][j-1],dp[i-1][j]})+1;
                }
            }
        }
        cout<< dp[n][m];
        cout << endl;
    }
}

