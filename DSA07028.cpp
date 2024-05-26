#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        stack<int> st;
        for(int i=n-1; i>=0; i--)
        {
            while(!st.empty()&&a[st.top()]<a[i])
            {
                a[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            a[st.top()]=-1;
            st.pop();
        }
        for(int i=0; i<n; i++)
        {
            cout << i-a[i]<<" ";
        }
        cout << endl;
    }
}
