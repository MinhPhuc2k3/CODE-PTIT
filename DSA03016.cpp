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
        int s, d;
        cin>>s>>d;
        vector<int> res;
        d--;
        while(d--)
        {
            int x = (s-1>9)? 9:s-1;
            res.push_back(x);
            s-=x;
        }
        if(s>9) cout <<-1;
        else
        {
            cout << s;
            for(int i=res.size()-1; i>=0; i--) cout << res[i];
        }
        cout << endl;
    }
}

