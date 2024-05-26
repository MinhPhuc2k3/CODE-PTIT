//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int k;
string a, b;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>k>>a>>b;
        vi ans;
        reverse(all(a));
        reverse(all(b));
        while(a.size()<b.size()) a+="0";
        while(b.size()<a.size()) b+="0";
        int i=0, m=0;
        while(i<a.size())
        {
            int x = (a[i]-'0'+b[i]-'0'+m);
            if(m) m--;
            if(x>=k) {
                m++;
                x%=k;
            }
            ans.push_back(x);
            i++;
        }
        if(m>0) ans.push_back(m);
        for(int i=ans.size()-1; i>=0; i--) cout << ans[i];
        cout << endl;
    }
}

