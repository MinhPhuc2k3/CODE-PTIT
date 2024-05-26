//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const long long mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

ll inv[1005];
ll b[1005][1005];

void init()
{
    inv[0]=inv[1]=1;
    for(int i=2; i<1005; i++)
    {
        inv[i] = mod - (mod/i)*inv[mod%i]%mod;
    }
    for(int i=0; i<1005; i++)
    {
        ll sum = 0;
        for(int j=2; j<1005; j++)
        {
            b[i][j] = ((b[i-1][j-1]*i)%mod*inv[j])%mod;
            sum += b[i][j]%mod;
        }
        sum = 1-sum;
        while(sum<0) sum+=mod;
        b[i][1] = sum%mod;
    }
}
ll nk[1005];
void innk(ll n, ll k)
{
    n%=mod;
    nk[0] = 1;
    for(int i = 1; i <= k + 2; i++){
        nk[i] = (nk[i - 1]%mod * n%mod) % mod;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    init();
    cin>>t;
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        ll res = 0;
        innk(n,k);
        for(int i=1; i<=k+1; i++)
        {
            res += (nk[i]%mod*b[k][i]%mod)%mod;
            res%=mod;
        }
        cout << res;
        cout<< endl;
    }
}
