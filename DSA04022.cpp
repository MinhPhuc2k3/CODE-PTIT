#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

ll solve (ll n, ll k)
{
    ll mid = (pow(2,n)-1)/2+1;
    if(k==mid) return n;
    else if(k>mid) return solve(n-1, k-mid);
    else return solve(n-1, k);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        cout << (char)(solve(n, k)+'A'-1);
        cout<< endl;
    }
}
