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
        vector<pair<float,float>> a;
        int n;cin>>n;
        for(int i=0; i<n; i++)
        {
            float x,y;
            cin>>x>>y;
            a.push_back({x,y});
        }
        int dp[n];
        dp[0]=1;
        for(int i=1; i<n; i++)
        {
            dp[i]=1;
            for(int j=i-1; j>=0; j--)
            {
                if(a[i].first>a[j].first&&a[i].second<a[j].second)
                {
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        cout << *max_element(dp,dp+n);
        cout << endl;
    }
}

