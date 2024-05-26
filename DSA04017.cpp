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
        int n;
        cin>>n;
        int a[n], b[n-1];
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        int l=0, r=n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if((mid==0||a[mid-1]==b[mid-1])&&a[mid]!=b[mid])
            {
                cout << mid+1;
                break;
            }
            else if(a[mid]==b[mid])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<< endl;
    }
}
