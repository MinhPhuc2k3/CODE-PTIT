#include <bits/stdc++.h>
#define all<x> x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;


ll solve(ll n, ll k)
{
    if(k==0) return 1;
    if(k==1) return n;
    ll x=solve(n,k/2);
    if(k%2) return ((x*x)%mod*n%mod)%mod;
    else return (x*x)%mod;
}

int main()
{
    ll n, k;
    while(cin>>n>>k)
    {
        if(!n&&!k) break;
        cout << solve(n,k);
        cout<< endl;
    }
}
