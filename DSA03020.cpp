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
        string s;
        cin>>s;
        stack<char> st;
        int mo = 0, dong = 0;
        int dc = 0, res = 0;
        for(int i:s)
        {
            if(i=='[')
            {
                mo++;
                if(dc>0) {
                    res+=dc;
                    dc--;
                }
            }
            else{
                dong++;
                dc = dong - mo;
            }
        }
        cout << res<< endl;
    }
}

