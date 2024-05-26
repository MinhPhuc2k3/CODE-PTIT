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
        int m, n;
        cin>>m>>n;
        int a[m], b[n];
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        int cnt = 0;
        sort(b,b+n);
        int so1=0, so0=0, so2=0;
        for(int x:b)
        {
            if(x>2) break;
            else if(x==1) so1++;
            else if(x==2) so2++;
            else so0++;
        }
        for(int x:a)
        {
            if(x==1) cnt+=so0;
            else if(x==2) {
                int idx = upper_bound(b,b+n,4) -b;
                cnt+=n-idx+so1+so0;
            }
            else if(x>=3)
            {
                int idx = upper_bound(b, b+n, x)-b;
                if(x==3) cnt+=so2;
                cnt+=n-idx+so1+so0;
            }
        }
        cout << cnt;
        cout<< endl;
    }
}
