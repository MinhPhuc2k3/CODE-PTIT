#include <bits/stdc++.h>
using namespace std;
int n,k, x[22];

void Try(int i)
{
    if(i>n&&k==0)
    {
        for(int i=1;i<=n;i++) cout << x[i];
        cout << endl;
    }
    else if(i<=n)
    {
        x[i]=0;
        Try(i+1);
        x[i]=1;
        k--;
        Try(i+1);
        k++;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(x,0,sizeof(x));
        cin>>n>>k;   
        Try(1);

    }
}
