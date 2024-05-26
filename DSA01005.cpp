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
        int a[n+1];
        for(int i=1; i<=n; i++) a[i]=i;
        while(1)
        {
            for(int i=1; i<=n;i++) cout << a[i];
            cout << ' ';
            int i=n-1;
            while(a[i+1]<a[i]&&i>0) i--;
            if(!i) break;
            else {
                int k=n;
                while(a[i]>a[k])k--;
                swap(a[i],a[k]);
                int l=i+1, r=n;
                while(l<r)
                {
                    swap(a[l],a[r]);
                    l++;r--;
                }

            }
        }
        cout<<endl;
    }
}
