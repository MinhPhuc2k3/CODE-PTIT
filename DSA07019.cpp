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
        int n;
        cin>>n;
        int a[n],b[n],c[n];
        for(int i=0; i<n; i++) cin>>a[i];
        stack<int> st;
        for(int i=0; i<n; i++)
        {
            while(!st.empty()&&a[st.top()]>a[i])
            {
                b[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()) {
            b[st.top()]=n;
            st.pop();
        }
        for(int i=n-1; i>=0; i--)
        {
            while(!st.empty()&&a[st.top()]>a[i])
            {
                c[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            c[st.top()]=-1;
            st.pop();
        }
        ll res = -mod;
        for(int i=0; i<n; i++){
            res=max({res,(ll)a[i]*(b[i]-c[i]-1),a[i]});
        }
        cout << res<<endl;
    }
}


