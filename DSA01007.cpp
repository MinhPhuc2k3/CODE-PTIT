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
        char a[n+1];
        for(int i=1;i<=n; i++) a[i]='A';
        while(1)
        {
            for(int i=1; i<=n; i++) cout << a[i];
            cout << ' ';
            int i=n;
            while(a[i]=='B'&&i>0) i--;
            if(!i) break;
            a[i]='B';
            for(int j=i+1; j<=n; j++)  a[j]='A';
        }
        cout << endl;
    }
}
