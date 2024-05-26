#include <bits/stdc++.h>
#define all<x> x.begin(),x.end();
using namespace std;
const int mod=123456789;
typedef long long ll;
typedef pair<int,int> pii;


ll solve(ll n, ll k)
{
    if(k==0) return 1;
    long long x=solve(n,k/2);
    if(k%2) return (x%mod*x%mod*n%mod)%mod;
    else return (x%mod*x%mod)%mod;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cout << solve(2,n-1);
        cout<< endl;
    }
}
