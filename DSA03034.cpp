#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, k;
        cin>>n>>m>>k;
        int a[n],b[m], c[k];
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        for(int &x:c) cin>>x;
        int i=0,j=0, l=0, cnt=0;
        while(i<n&&j<m&&l<k)
        {
            if(a[i]==b[j]&&b[j]==c[l]){
                cout << a[i]<<" ";
                cnt++;
            }
            int m = min({a[i], b[j], c[l]});
            if(a[i]==m) i++;
            if(b[j]==m) j++;
            if(c[l]==m) l++;
        }
        if(!cnt) cout << "NO";
        cout<< endl;
    }
}
