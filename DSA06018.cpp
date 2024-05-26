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
        int n;
        cin>>n;
        ll a[n];
        for(ll &x:a) cin>>x;
        sort(a,a+n);
        set<int>num;
        for(auto x:a) num.insert(x);
        cout << a[n-1]-a[0]-num.size()+1;
        cout<< endl;
    }
}
