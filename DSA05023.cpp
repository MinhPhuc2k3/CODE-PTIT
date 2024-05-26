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
        string s;
        cin>>s;
        int n=s.size();
        ll dp[n+1];
        dp[1]=s[0]-'0';
        ll res = 0;
        for(int i=2; i<=n; i++)
        {
            dp[i]=dp[i-1]*10+(s[i-1]-'0')*i;
            res+=dp[i];
        }
        cout << res+dp[1];
        cout << endl;
    }
}

