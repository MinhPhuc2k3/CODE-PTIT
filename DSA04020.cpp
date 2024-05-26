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
        for(int &i:a) cin>>i;
        int l=0, r=n-1, res=-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(a[mid]==x)
            {
                res=mid+1;
                break;
            }
            else if(a[mid]<x)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        if(res==-1) cout << "NO";
        else cout << res;
        cout<< endl;
    }
}
