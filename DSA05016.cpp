//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int dp[10001];

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    int b2=0, b3=0, b5=0;
    dp[0]=1;
    for(int i=1; i<10001; i++)
    {
        dp[i]=min({dp[b2]*2, dp[b3]*3, dp[b5]*5});
        if(dp[i]==dp[b2]*2)
        {
            b2++;
        }
        if(dp[i]==dp[b3]*3)
        {
            b3++;
        }
        if(dp[i]==dp[b5]*5)
        {
            b5++;
        }
    }
 //   for(int i=0; i<100; i++) cout << dp[i]<<" ";
    cout << endl;
    while(t--)
    {
        int n;
        cin>>n;
        cout << dp[n-1];
        cout << endl;
    }
}

