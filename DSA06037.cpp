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
        for(int i=0; i<n; i++) cin>>a[i];
        int l[n], r[n];
        l[0]=a[0];
        for(int i=1; i<n-1; i++) l[i]=max(l[i-1],a[i]);
        r[n-1]=a[n-1];
        for(int j=n-2; j>=0; j--) r[j]=min(r[j+1],a[j]);
        vi ans;
        for(int i=0; i<n-1; i++){
            if(l[i]<=r[i+1]) ans.push_back(i+1);
        }
        cout << ans.size()<<endl;
        if(ans.size())
        for(int i=0; i<ans.size(); i++) cout << ans[i]<<" ";
        else cout << endl;
        cout << endl;
    }
}

