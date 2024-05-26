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
        int n; cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int dp[n];
        dp[0]=a[0];
        for(int i=1; i<n; i++)
        {
            dp[i]=a[i];
            for(int j=i-1; j>=0; j--){
                if(a[i]>a[j]) dp[i]=max(dp[i],dp[j]+a[i]);
            }
        }
        cout << *max_element(dp,dp+n);
        cout << endl;
    }
}

