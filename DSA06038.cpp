//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
int ans = 0,b[1000001];

int merge(int a[], int l, int r)
{
    int res=0;
    int mid=(l+r)/2;
    vector<int> x;
    vector<int> y;
    for(int i=l; i<=mid; i++)
    {
        if(a[i]%2==0) x.push_back(a[i]);
    }
    for(int i=mid+1; i<=r; i++)
    {
        if(a[i]%2==0) y.push_back(a[i]);
    }
    int i=0, j=0;
    int tmp = l;
    int cnt = 0;
    while(i<x.size()&&j<y.size())
    {
        if(a[l]%2!=0) l++;
        else if(x[i]<=y[j])
        {
            if(x[i]%2==0){
                res+=cnt;
                }
            a[l]=x[i]; i++; l++;
        }
        else
        {
            if(y[j]%2==0) cnt++;
            a[l]=y[j]; j++; l++;
        }
    }
    while(j<y.size()){
        if(a[l]%2==0){
            a[l]=y[j]; j++;
        }
        l++;
    }
    while(i<x.size()){
        if(a[l]%2==0){
            if(x[i]%2==0){
                res+=cnt;
            }
            a[l]=x[i]; i++;
        }
        l++;
    }
    return res;
}

int  merge_sort(int a[], int l, int r)
{
    int res=0;
    if(l<r)
    {
        int mid=(l+r)/2;
        res+=merge_sort(a,l,mid);
        res+=merge_sort(a,mid+1,r);
        res+=merge(a,l,r);
    }
    return res;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
        b[i]=a[i];
    }
    ans=merge_sort(a,0,n-1);
    int cnt = 0;
   // for(int i=0; i<n; i++) cout << a[i]<<" ";
   for(int i=0; i<n-1; i++)
   {
       if(a[i]%2==0&&a[i+1]%2==0)
       {
           cnt++;
       }
       else if(a[i]%2==0&&a[i+1]%2!=0)
       {
           ans -= merge_sort(b,i-cnt,i);
           cnt=0;
       }
   }
    cout << ans;
    return 0;
}
// 9 8 12 10 3 8 4
// 9 8 7 10 8 1 4


