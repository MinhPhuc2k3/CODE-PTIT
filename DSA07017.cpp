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
        int a[n], b[n], c[n];
        for(int i=0; i<n; i++) {
            cin>>a[i];
            b[i]=a[i];
        }
        stack<int> st;
        for(int i=0; i<n; i++)
        {
            while(!st.empty()&&a[i]>a[st.top()])
            {
                b[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            b[st.top()]=-1;
            st.pop();
        }
        for(int i=0; i<n; i++)
        {
            while(!st.empty()&&a[i]<a[st.top()])
            {
                c[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            c[st.top()]=-1;
            st.pop();
        }
        for(int i=0; i<n; i++)
        {
            if(b[i]==-1||c[b[i]]==-1) b[i]=-1;
            else b[i]=a[c[b[i]]];
        }
        for(int i=0; i<n; i++) cout << b[i]<<" ";
        cout <<endl;
    }
}



