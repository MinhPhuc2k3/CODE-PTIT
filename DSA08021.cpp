//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int n,m, a[1001][1001];
ll res;
ll dp[1001][1001];

ll solve(int n, int m)
{
    ll mi=1e18;
    for(int i=n-1;i>=0;i--)
    {
        if(i+a[i][m]==n) {
            if(dp[i][m]!=-1) mi=min(mi,dp[i][m]+1);
            else {
                ll x =solve(i,m);
                if(x) mi=min(x+1,mi);
            }
        }
    }
    for(int i=m-1;i>=0;i--)
    {
        if(i+a[n][i]==m) {
            if(dp[n][i]!=-1) mi=min(mi,dp[n][i]+1);
            else {
                ll x =solve(n,i);
                if(x) mi=min(x+1,mi);
            }
        }
    }
    dp[n][m]=mi;
    return mi;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;res=mod;
        for(int i=0;i<n;i++)
            for(int j=0; j<m;j++) cin>>a[i][j];
        if(!a[0][0]) cout << -1;
        else {
            for(int i=0;i<n;i++)
            for(int j=0; j<m;j++) dp[i][j]=-1;
            dp[0][0]=0;
            dp[a[0][0]][0]=1;
            dp[0][a[0][0]]=1;
        solve(n-1,m-1);
        res = dp[n-1][m-1];
        if(res==1e18) cout <<-1;
        else
        cout<< res;
        }
        cout<< endl;
    }
}
