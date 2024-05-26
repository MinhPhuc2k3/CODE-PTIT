//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int main()
{
    int q;
    cin>>q;
    cin.ignore();
    string s;
    stack<int> st;
    while(q--)
    {
        getline(cin,s);
        stringstream ss(s);
        string method;
        ss>>method;
                if(method == "PUSH"){
            int n;
            ss>>n;
            st.push(n);
        }
        else if(method=="PRINT"){
            if(st.empty()) cout << "NONE";
            else cout<<st.top();
            cout << endl;
        }
        else if(method=="POP"){
            if(!st.empty())st.pop();
        }
    }
}
