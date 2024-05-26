//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

void solve(string s)
{
    stack<ll> st;
    for(int i=s.size()-1; i>=0; i--)
    {
        if(s[i]<='9'&&s[i]>='0')
        {
            st.push(s[i]-'0');
        }
        else
        {
            ll tmp;
            ll x = st.top();st.pop();
            ll y = st.top(); st.pop();
            switch (s[i]){
                case '+': tmp=x+y; break;
                case '-': tmp=x-y; break;
                case '*':tmp =x*y; break;
                default: tmp = x/y; break;
            }
            st.push(tmp);
        }
    }
    cout << st.top();
}

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
        solve(s);
        cout<< endl;
    }
}
