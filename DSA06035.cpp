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
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int left[n];
        left[0]=1;
        for(int i=1; i<n; i++)
        {
            if(a[i]>a[i-1]) left[i]=left[i-1]+1;
            else left[i]=1;
        }
        int right[n];
        right[n-1]=1;
        for(int i=n-2; i>=0; i--)
        {
            if(a[i]>a[i+1]) right[i]=right[i+1]+1;
            else right[i]=1;
        }
        int res=-mod;
        for(int i=0; i<n; i++)
        {
            res=max(right[i]+left[i]-1,res);
        }
        cout << res;
        cout<< endl;
    }
}
