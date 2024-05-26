#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int &x:a) cin>>x;
    int m=0;
    int sfa[n+1]={0};
    for(int i=0; i<n; i++){
        sfa[a[i]]=sfa[a[i]-1]+1;
        m=max(sfa[a[i]],m);
    }
    cout << n-m;
}
