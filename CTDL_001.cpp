#include <bits/stdc++.h>
using namespace std;

int a[1000];
int k;

void snp(int n)
{
    for(int i=1; i<=n; i++) a[i]=0;
    while(1)
    {
        int w=2;
        while(w--)
        {
            for(int i=1; i<=n; i++) cout << a[i]<<' ';
            if(k%2)
            {
                if(w==1) cout <<0<<' ';
                else cout << 1<<' ';
            }
            for(int i=n; i>=1; i--) cout << a[i]<<' ';
            cout << endl;
            if(k%2==0) break;
        }
        int i=n;
        while(a[i]==1&&i>0) i--;
        if(i==0) break;
        a[i]=1;
        for(int j=i+1; j<=n; j++)
        {
            a[j]=0;
        }
    }
}

int main()
{
    cin>>k;
    snp(k/2);
}
