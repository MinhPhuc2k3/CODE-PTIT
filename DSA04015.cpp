//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int main()
{
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
                res=mid+1;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout << res;
        cout<< endl;
    }
}
