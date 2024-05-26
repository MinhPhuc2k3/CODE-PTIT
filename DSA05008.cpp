//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, sum;
        cin>>n>>sum;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int dp[sum+1]={0};
        dp[0]=1;
        for(int i=0; i<n; i++)
        {
            for(int j=sum; j>=a[i]; j--)
            {
                dp[j]=max(dp[j-a[i]],dp[j]);
            }
        }
        if(dp[sum]) cout << "YES";
        else cout << "NO";
        cout<< endl;
    }
}
