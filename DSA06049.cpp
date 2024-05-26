//Le Minh Phuc CN02
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
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int &x:a) cin>>x;
        ll cnt=0;
        sort(a,a+n);
        for(int i=0; i<n-1; i++)
        {
            cnt+=lower_bound(a+i,a+n,a[i]+k)-a-1-i;
        }
        cout << cnt;
        cout<< endl;
    }
}
