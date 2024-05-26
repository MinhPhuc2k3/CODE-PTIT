#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        priority_queue<int, vector<int>, greater<int>> q;
        for(int i=0; i<n; i++) {
            int x; cin>>x;
            q.push(x);
        }
        long long res=0;
        while(q.size()>1)
        {
            long long x = 0;
            x+=q.top();
            q.pop();
            x+=q.top();
            q.pop();
            q.push(x);
            res+=x;
        }
        cout << res<<endl;
    }
}
