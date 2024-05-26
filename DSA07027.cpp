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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int res[n]={0};
        for(int i=0; i<n; i++) cin>>a[i];
        stack<int> st;
        for(int i = 0; i<n; i++)
        {
            while(!st.empty()&&a[i]>a[st.top()]){
                res[st.top()] = a[i];
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            res[st.top()]=-1;
            st.pop();
        }
        for(int x:res) cout<<x<<" ";
        cout<< endl;
    }
}
