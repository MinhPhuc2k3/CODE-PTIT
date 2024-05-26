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
        set<int> hop;
        map<int, int> mp;
        int n, m;
        cin>>n>>m;
        int a[n], b[m];
        for(int &x:a) {
            cin>>x;
            hop.insert(x);
            mp[x]++;
        }
        for(int &x:b)
        {
            cin>>x;
            hop.insert(x);
        }
        for(int x:hop) cout << x<< " ";
        cout << endl;
        for(int x:b) if(mp[x]) cout << x<<" ";
        cout<< endl;
    }
}
