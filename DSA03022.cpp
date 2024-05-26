#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(auto &x:a) cin>>x;
    sort(a, a+n);
    int m;
    m=max({a[0]*a[1],a[0]*a[1]*a[n-1],a[n-1]*a[n-2],a[n-1]*a[n-2]*a[n-3]});
    cout << m;
}
