//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

bool solve(string s)
{
    stack<char> st;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{') st.push(s[i]);
        else if(!st.empty())
        {
            if(s[i]==')'&&st.top()=='(')  st.pop();
            else if(s[i]==']'&&st.top()=='[') st.pop();
            else if(s[i]=='}'&&st.top()=='{') st.pop();
            else return false;
        }
    }
    return true;
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
        if(solve(s)) cout << "YES";
        else cout << "NO";
        cout<< endl;
    }
}
