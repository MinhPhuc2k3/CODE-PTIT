#include <bits/stdc++.h>
using namespace std;
int n,k;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[k+1];
        for(int i=1; i<=k; i++)  cin>>a[i];
        int i=k;
        while(a[i]==n-k+i&&i>0) i--;
        if(!i) for(int x=1; x<=k; x++) cout << x<<' ';
        else {
            a[i]++;
            for(int j=i+1; j<=k; j++) a[j]=a[i]+j-i;
            for(int i=1; i<=k; i++) cout << a[i]<<' ';
        }
        cout << endl;
    }
}
