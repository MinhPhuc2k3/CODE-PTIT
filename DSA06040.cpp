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
        int n1, n2,n3;
        cin>>n1>>n2>>n3;
        ll a[n1],b[n2], c[n3];
        for(ll &x:a) cin>>x;
        for(ll &x:b) cin>>x;
        for(ll &x:c) cin>>x;
        int i=0, j=0, k=0, cnt=0;
        while(i<n1&&j<n2&&k<n3)
        {
            if(a[i]==b[j]&&c[k]==b[j]) {
                cout << a[i]<<" ";
                cnt++;
                i++;j++;k++;
            }
            else if(a[i]<b[j]) i++;
            else if(c[k]<a[i]) k++;
            else j++;
        }
        if(!cnt) cout << -1;
        cout<< endl;
    }
}
