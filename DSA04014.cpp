//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

ll cnt;

void merge(ll a[], int l, int r, int mid)
{
    vi b;
    int x=l, y=mid+1;
    while(x<=mid&&y<=r)
    {
        if(a[x]>a[y])
        {
            b.push_back(a[y]);
            cnt+=(mid-x+1);
            y++;
        }
        else
        {
            b.push_back(a[x]);
            x++;
        }
    }
    while(x<=mid)
    {
        b.push_back(a[x]);
        x++;
    }
    while(y<=r)
    {
        b.push_back(a[y]);
        y++;
    }
    for(int i=l; i<=r; i++)
    {
        a[i]=b[i-l];
    }
}

void merge_sort(ll a[], int l, int r)
{
    if(l>=r) return;
    int mid = (l+r)/2;
    merge_sort(a,l,mid);
    merge_sort(a,mid+1,r);
    merge(a,l,r,mid);
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
        int n;
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        cnt = 0;
        merge_sort(a,0,n-1);
        cout << cnt;
        cout<< endl;
    }
}
