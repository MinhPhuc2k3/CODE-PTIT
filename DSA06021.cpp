//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int Search(int a[], int x, int n)
{
    int l = 0, r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x) return mid+1;
        if(a[r]>x)
        {
            if(a[l]>x||a[mid]<x) l =mid+1;
            else r = mid-1;
        }
        else
        {
            if(a[r]<x||a[mid]>x) r= mid-1;
            else l=mid+1;
        }
    }
    return -1;
}

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
        cout << Search(a,x,n);
        cout<< endl;
    }
}
