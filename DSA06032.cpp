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
        ll n, k;
        cin>>n>>k;
        ll a[n];
        for(ll &x:a) cin>>x;
        sort(a,a+n);
        ll cnt = 0;
        bool c=1;
        for(ll i=0; i<=n-3; i++)
        {
            if(a[i] > k) break;
            for(ll j=i+1; j<=n-2; j++)
            {
                if(a[i]+a[j]>k) {
                    c=0;
                    break;
                }
                ll x = lower_bound(a+j+1,a+n,k-a[i]-a[j])-a;

                x -= j+1;
                cnt+=x;
            }
            if(!c) break;
        }
        cout<< cnt;
        cout<< endl;
    }
}
