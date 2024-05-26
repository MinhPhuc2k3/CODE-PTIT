#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, s, m;
        cin>>n>>s>>m;
        long long f = s*m;
        if(f%n) f=f/n+1;
        else f=f/n;
        s = s-s/7;
        if(f>s) cout << -1;
        else cout << f;
        cout << endl;
    }
}
