#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    set<int> se;
    int a[n+1], idx=1;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        se.insert(x);
    }
    for(auto x:se)
    {
        a[idx]=x;
        idx++;
    }
    int x[k+1];
    for(int i=1; i<=k; i++) x[i]=i;
    while(1)
    {
        for(int i=1; i<=k; i++) cout << a[x[i]]<<' ';
        cout << endl;
        int i=k;
        while(x[i]==idx-1-k+i&&i>0) i--;
        if(!i) break;
        x[i]++;
        for(int j=i+1; j<=k;j++) x[j]=x[i]+j-i;

    }
}
