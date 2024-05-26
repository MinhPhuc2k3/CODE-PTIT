//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

void solve(string s)
{
    stack<string> st;
    for(int i=s.size()-1;i>=0; i--)
    {
        if(isalpha(s[i])) st.push(string(1,s[i]));
        else{
            string tmp = st.top();
            st.pop();
            tmp+=st.top()+s[i];
            st.pop();
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
