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
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        ll dp[k+1]={0};
        dp[0]=1;
        for(int i=1; i<=k; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i>=a[j]) dp[i]+=dp[i-a[j]];
                dp[i]%=mod;
            }
        }
        cout << dp[k];
        cout << endl;
    }
}

