#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int m = 1e9+7;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;ll k;
        cin>>n>>k;
        ll a[n+1];
        for(int i=1; i<=n; i++)
            cin>>a[i];
        a[0]=0;
        ll pre[n+1]; pre[0]=0;
        for(int i=1; i<=n; i++)
        {
            pre[i]=pre[i-1]+a[i];
        }
        bool check = false;
        for(int i=0; i<=n-1; i++)
        {
            int x = lower_bound(pre+i+1,pre+n,pre[i]+k) - pre;
            if(x<=n&&pre[x]-pre[i]==k) {
                check = true;
                break;
            }
        }
        if(check) cout << "YES";
        else cout <<"NO";
        cout << endl;
    }
}
