//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int cmb(int a[], int l, int r)
{
    int mid=(l+r)/2;
    int maxl=0, maxr=0, sum = 0;
    for(int i=mid; i>=l; i--)
    {
        sum+=a[i];
        maxl=max(maxl,sum);
    }
    sum=0;
    for(int i=mid+1; i<=r; i++)
    {
        sum+=a[i];
        maxr=max(maxr,sum);
    }
    return maxr+maxl;
}

int solve(int a[],int l, int r)
{
    int mid=(l+r)/2;
    if(l==r) return a[l];
    else return max({solve(a,l,mid),solve(a,mid+1,r),cmb(a,l,r)});
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        cout << solve(a,0,n-1);
        cout<< endl;
    }
}
