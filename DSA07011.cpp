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
        string s,ans="";
        cin>>s;
        stack<string> st;
        for(char x:s)
        {
            if(isalpha(x)) st.push(string(1,x));
            else
            {
                string tmp="";
                tmp += st.top();
                st.pop();
                tmp =st.top()+tmp;
                st.pop();
                tmp=x+tmp;
                st.push(tmp);
            }
        }
        cout << st.top()<<endl;
    }
}


