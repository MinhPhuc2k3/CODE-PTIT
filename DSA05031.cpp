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
        int n;
        cin>>n;
        int dp[n+1];
        vector<int> a;
        for(int i=1; i*i<=n; i++)
        {
            a.push_back(i*i);
        }
        dp[0]=0;
        dp[1]=1;
        for(int i=2; i<=n; i++)
        {
            dp[i]=mod;
            for(int j=0; j<a.size(); j++)
            {
                if(i>=a[j])dp[i]=min(dp[i],dp[i-a[j]]+1);
            }
        }
        cout << dp[n];
        cout << endl;
    }
}

