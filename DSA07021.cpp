#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9+7;

void solve(string s)
{
    stack<int> st;
    stack<char> kt;
    int res=-INF;
    st.push(-1);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(') {
            kt.push('(');
            st.push(i);
           }
        else {
            if(!kt.empty()&&kt.top()=='(')
            {
                kt.pop();
                st.pop();
                res = max(res,i-st.top());
            }
            else {
                st.push(i);
                kt.push(')');
            }
        }
    }
    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(true);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        solve(s);
        cout << endl;
    }
}
