//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
// so cap toi da n/2
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
        sort(a,a+n);
        int cnt = 0;
        int idx = upper_bound(a, a+n/2, a[n-1]/2) - a - 1;
        if(idx<0&&a[0]*2>a[n-1]) cout << n;
        else
        {
            cnt = 1; int p =idx; idx--;
            for(int j = n-2; idx>=0&&j>p; j--)
            {
                while(a[idx]*2>a[j]&&idx>0) idx--;
                if(idx>=0) {
                    cnt++;
                }
                idx--;
            }
            cout << n-cnt;
        }
        cout << endl;
    }
}

