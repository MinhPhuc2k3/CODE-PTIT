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
        stack<char> st;
        int cnt = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(!st.empty()&&s[i]==')'&&st.top()=='(')
            {
                cnt+=2;
                st.pop();
            }
            else st.push(s[i]);
        }
        cout << cnt<<endl;
    }
}


