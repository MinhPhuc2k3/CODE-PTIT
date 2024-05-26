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
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0; i<n; i++)
            for(int j=0; j<m; j++) cin>>a[i][j];
        int dp[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(i==0&&j==0) dp[i][j]=a[i][j];
                else if(i==0) dp[i][j]=a[i][j]+dp[i][j-1];
                else if(j==0) dp[i][j]=a[i][j]+dp[i-1][j];
                else dp[i][j]=a[i][j]+min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]});
            }
        }
        cout << dp[n-1][m-1];
        cout << endl;
    }
}

