//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
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
        stack<string> st;
        for(char c:s)
        {
            if(c!=')') st.push(string(1,c));
            else
            {
                string tmp="";
                while(st.top()!="(")
                {
                    tmp=st.top()+tmp;
                    st.pop();
                }
                st.pop();
                if(!st.empty())
                {
                    if(st.top()=="-")
                    {
                        for(char &c1:tmp)
                        {
                            if(c1=='+') c1='-';
                            else if(c1=='-') c1='+';
                        }

                    }
                    if(st.top()!="(")
                    {
                        tmp = st.top()+tmp;
                        st.pop();
                    }
                }
                st.push(tmp);
            }
        }
        string ans="";
        while(!st.empty())
        {
            ans = st.top()+ans;
            st.pop();
        }
        //if(ans[0])
        cout << ans;
        cout<< endl;
    }
}
