#include <bits/stdc++.h>
#define all<x> x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;


ll solve(ll n, ll k)
{
    if(k==0) return 1;
    ll x=solve(n,k/2);
    if(k%2) return ((x*x)%mod*n%mod)%mod;
    else return (x*x)%mod;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n, k=0;
        cin>>n;
        ll x=n;
        while(x>0)
        {
            k=k*10+(x%10);
            x/=10;
        }
        cout << solve(n,k);
        cout<< endl;
    }
}
