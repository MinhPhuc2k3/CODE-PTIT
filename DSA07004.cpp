//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int solve (string s)
{
    stack<char> st;
    for(char x:s)
    {
        if(!st.empty()&&st.top()=='('&&x==')')
        {
            st.pop();
        }
        else st.push(x);
    }
    int cnt=0;
    while(!st.empty())
    {
        char x= st.top();
        st.pop();
        char y=st.top();
        st.pop();
        if(x=='('){
            if(y=='(') cnt++;
            else cnt+=2;
        }
        else cnt++;
    }
    return cnt;
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
        cout << solve(s);
        cout<< endl;
    }
}
