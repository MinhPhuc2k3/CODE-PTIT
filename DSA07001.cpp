//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> st;
    string s;
    while(getline(cin,s))
    {
        stringstream ss(s);
        string method;
        ss>>method;
        if(method == "push"){
            int n;
            ss>>n;
            st.push_back(n);
        }
        else if(method=="show"){
            for(int x:st) cout << x<<" ";
            if(!st.size()) cout << "empty";
            cout << endl;
        }
        else if(method=="pop"){
            st.pop_back();
        }
    }
}
