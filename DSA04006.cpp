//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

ll u[55];


ll Find(ll n, ll pos, int d)
{

    if(pos%2==1) return n&1;
    ll x = (u[d-1]+1);
    if(pos==x) return n&1;
    if(pos<x) return Find(n/2, pos, d-1);
    else return Find(n/2,pos-x, d-1);
}

int main()
{
    int t;
    ll n, l, r;
    cin>>t;
    while(t--)
    {
        ll res = 0;
        cin>>n>>l>>r;
        u[1]=1;
        int d = 2;
        int tmp = n/2;
        while(tmp>0)
        {
            u[d]=u[d-1]*2+1;
            tmp/=2;
            ++d;
        }
        d--;
        for(ll i=l; i<=r; i++)
        {
            res+= Find(n,i,d);
        }
        cout << res<<'\n';
    }
}
