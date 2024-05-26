//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

void merge(int a[], int l, int r)
{
    int mid = (l+r)/2;
    vector<int> p;
    int i = l, j=mid+1;
    while(i<=mid&&j<=r)
    {
        if(a[i]<=a[j])
        {
            p.push_back(a[i]);
            i++;
        }
        else{
            p.push_back(a[j]);
            j++;
        }
    }
    while(i<=mid)
    {
        p.push_back(a[i]);
        i++;
    }
    while(j<=r)
    {
        p.push_back(a[j]);
        j++;
    }
    for(int i=l; i<=r; i++) a[i]=p[i-l];
}

void merge_sort(int a[], int l, int r)
{
    if(r<=l) return;
    int mid = (l+r)/2;
    merge_sort(a, l, mid);
    merge_sort(a, mid+1, r);
    merge(a,l,r);
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
        int n;cin>>n;int a[n];for(int &x:a) cin>>x;
        merge_sort(a,0,n-1);
        for(int x:a) cout << x<<" ";
        cout<< endl;
    }
}
