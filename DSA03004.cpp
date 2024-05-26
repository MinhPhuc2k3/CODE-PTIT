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
        int si=n/2+1;
        long long s[si+1]={0};
        int c=n-1;
        while(c>=1&&si>0)
        {
            s[si]=a[c]+a[c-1];
            c-=2;
            si--;
        }int i=0;
        while(s[i]==0) i++;
        for(int j=n/2+1; j>i; j--)
        {
            if(s[j]>=10) {
                s[j]-=10;
                s[j-1]+=1;
            }
        }

        for(int j=i; j<=n/2+1; j++) cout << s[j];
        cout << endl;
    }
}
