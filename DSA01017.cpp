//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

string s;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cout << s[0];
        for(int i=1; i<s.size(); i++)
        {
            cout << ((s[i-1]-'0')^(s[i]-'0'));
        }
        cout << endl;
    }
}

