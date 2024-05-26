//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int priority(char x)
{
    if(x=='+'||x=='-') return 1;
    if(x=='*'||x=='/') return 2;
    if(x=='^') return 3;
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
        string ans="";
        stack<char> st;
        for(char x:s)
        {
            if((x<='Z'&&x>='A')||(x>='a'&&x<='z')) ans+=x;
            else
            {
                if(x=='(') st.push(x);
                else if(x==')'){
                    while(!st.empty()&&st.top()!='(')
                    {
                        char tmp = st.top();
                        ans+=tmp;
                        st.pop();
                    }
                    st.pop();
                }
                else {
                    while(!st.empty()&&st.top()!='('&&priority(x)<=priority(st.top()))
                    {
                        char tmp = st.top();
                        ans+=tmp;
                        st.pop();
                    }
                    st.push(x);
                }
            }
        }
        while(!st.empty())
        {
            char tmp =st.top();
            if(tmp!='('&&tmp!=')') ans+=tmp;
            st.pop();
        }
        cout << ans<<endl;
    }
}


