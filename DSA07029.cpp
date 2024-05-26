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
        stack<string> st;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==']')
            {
                string rp="";
                string tmp="";
                while(st.top()!="[")
                {
                    tmp=st.top()+tmp;
                    st.pop();
                }
                st.pop();
                int t=0;
                int x=1;
                while(!st.empty()&&st.top()[0]<='9'&&st.top()[0]>='0')
                {
                    t=stoi(st.top())*x+t;
                    x*=10;
                    st.pop();
                }
                if(t==0) t=1;
                for(int i=0; i<t; i++) rp+=tmp;
                st.push(rp);
            }
            else st.push(string(1,s[i]));
        }
        while(st.size()>1)
        {
            string tmp = st.top();
            st.pop();
            st.top()+=tmp;
        }
        cout << st.top()<<endl;
    }
}


