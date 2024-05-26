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
        int n;cin>>n;
        ll a[n],b[n];
        for(ll &x:a) cin>>x;
        for(ll &x:b) cin>>x;
        sort(a,a+n); sort(b,b+n,greater<int>());
        ll sum=0;
        for(int i=0; i<n;i++)
        {
            sum+=a[i]*b[i];
        }
        cout << sum<<endl;
    }
}

