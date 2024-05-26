//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

bool check(string s)
{
    stack<char> st;
    for(char x:s)
    {
        if(x==' ') continue;
        else if(x!=')'&&!isalpha(x)) st.push(x);
        else if(x==')'){
            int cnt = 0;
            while(st.top()!='(')
            {
                cnt++;
                st.pop();
            }
            st.pop();
            if(!cnt) return true;
        }
    }
    return false;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        if(check(s)) cout << "Yes";
        else cout <<"No";
        cout<< endl;
    }
}
//
