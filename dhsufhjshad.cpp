//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
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
        int n, s, k;
        cin>>n>>s>>k;
        int a[n+1];
        for(int i=1; i<=n; i++) cin>>a[i];
        int pre[n+1];
        pre[0]=a[0]=0;
        for(int i=1; i<=n; i++) pre[i]=a[i]+pre[i-1];
        int x = lower_bound(pre,pre+s,pre[s-1]-k)-pre;
        if(x==s) cout << -1 else cout << x+1;
        cout<< endl;
    }
}

