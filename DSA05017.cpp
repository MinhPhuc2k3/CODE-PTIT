//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

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
        int l[n], r[n];
        for(int i=0; i<n;i++) cin>>a[i];
        l[0]=a[0];
        for(int i=1; i<n; i++)
        {
            l[i]=a[i];
            for(int j=i-1; j>=0; j--)
            {
                if(a[i]>a[j]) l[i]=max(l[i],a[i]+l[j]);
            }
        }
        r[n-1]=a[n-1];
        for(int i = n-2; i>=0; i--)
        {
            r[i]=a[i];
            for(int j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                r[i]=max(r[i],r[j]+a[i]);
            }
        }
        int res=-mod;
        for(int i=0; i<n; i++)
        {
            res=max(res,l[i]+r[i]-a[i]);
        }
        cout << res;
        cout << endl;
    }
}

