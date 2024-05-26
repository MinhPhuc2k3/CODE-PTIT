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
        ll n;
        cin>>n;
        priority_queue<ll, vector<ll>, greater<ll>> q;
        for(int i=0; i<n; i++)
        {
            ll x; cin>>x;
            q.push(x);
        }
        ll cost = 0;
        while(q.size()>1)
        {
            ll a = q.top(); q.pop();
            ll b = q.top(); q.pop();
            cost+=(a+b%mod);
            cost%=mod;
            q.push((a+b)%mod);
        }
        cout<< cost<<endl;
    }
}

