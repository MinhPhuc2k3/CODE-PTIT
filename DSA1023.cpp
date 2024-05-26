#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int a[k+1], b[k+1];
        for(int i=1; i<=k; i++) {
            cin>>a[i];
        }
        for(int i=1; i<=k; i++) b[i]=i;
        int cnt = 0;
        while(1)
        {
            cnt++;
            bool check = true;
            for(int i=1; i<=k; i++)
            {
                if(b[i]!=a[i]) check = false;
            }
            if(check) break;
            int i=k;
            while(b[i]==n-k+i&&i>0) i--;
            b[i]++;
            for(int j=i+1; j<=k; j++) b[j]=b[i]+j-i;
        }
        cout << cnt<<endl;
    }
}
