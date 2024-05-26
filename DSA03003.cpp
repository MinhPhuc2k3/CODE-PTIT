#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(auto &x:a) cin>>x;
        sort(a,a+n);
        long long sum=0;
        for(int i=0; i<n; i++){
            sum+=((long long) a[i]*i)%mod;
            sum%=mod;
        }
        cout << sum<<endl;
    }
}
