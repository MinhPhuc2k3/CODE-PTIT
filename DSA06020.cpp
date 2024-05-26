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
        int n, x;
        cin>>n>>x;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int *idx = lower_bound(a,a+n,x);
        if(*idx==x) cout << 1;
        else cout << -1;
        cout<< endl;
    }
}
