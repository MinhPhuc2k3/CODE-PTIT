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
        string s, ans;
        cin>>s;
        s+='I';
        int m = 1;
        stack<char> st;
        for(char x:s)
        {
            if(x=='I')
            {
                string tmp=string(1,(char)(m+'0'));
                while(!st.empty()){
                    m++;
                    tmp=(char)(m+'0')+tmp;
                    st.pop();
                }
                m++;
                ans+=tmp;
            }
            else st.push(x);
        }
        cout << ans<<endl;
    }
}


