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
    ll dp[10][102]={0};
    for(int i=0; i<10; i++) dp[i][1]=1;
    for(int j=2; j<=101; j++)
    {
        for(int i=0; i<10; i++)
        {
            if(i==0) dp[i][j]=1;
            else{
                dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
            }
        }
    }
    while(t--)
    {
        int n;
        cin>>n;
        cout << dp[9][n+1];
        cout << endl;
    }
}

