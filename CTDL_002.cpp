#include <bits/stdc++.h>
using namespace std;
int n, k, cnt=0;

void xkt(int a[], int x[])
{
    for(int i=1; i<=n; i++)
    {
        x[i]=0;
    }
    while(1)
    {
        int s=0;
        vector<int>ans;
        for(int i=1;i<=n; i++)
        {
            if(x[i]) {
                s+=a[i];
                ans.push_back(a[i]);
            }
        }
        if(s==k) {cnt++;
            for(auto x:ans) cout <<x<<' ';
            cout <<endl;
        }
        int i=n;
        while(x[i]==1&&i>0) i--;
        if(!i) break;
        x[i]=1;
        for(int j=i+1; j<=n; j++) x[j]=0;
    }
}


int main(){
    cin>>n>>k;
    int a[n+1], x[n+1];
    for(int i=1; i<=n; i++) cin>>a[i];
    xkt(a,x);
    cout << cnt;
}
