#include <bits/stdc++.h>
using namespace std;
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
        map<int,int> m;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        int res =-1;
        int key = n/2;
        for(auto x:m)
            if(x.second>key) {
                res = x.first;
            }
        if(res>0) cout << res;
        else cout << "NO";
        cout << endl;
    }
}
