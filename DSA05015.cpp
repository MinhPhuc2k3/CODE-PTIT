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
        int n, k;
        cin>>n>>k;
        ll dp[k];
        dp[0]=n;
        for(int i=1; i<k; i++)
        {
            dp[i]=dp[i-1]*(n-i)%mod;
            dp[i]%=mod;
        }
        cout  <<dp[k-1];
        cout << endl;
    }
}

