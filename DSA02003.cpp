#include <bits/stdc++.h>
using namespace std;

int a[11][11],n,cnt;

void Try(int i, int j, string s)
{
    if(i==n-1&&j==n-1) {cout << s<<" ";cnt++;}
    else{
        if(i<n&&a[i+1][j]) Try(i+1,j,s+"D");
        if(j<n&&a[i][j+1]) Try(i,j+1,s+"R");
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        cnt=0;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++) cin>>a[i][j];
        string s="";
        if(a[0][0]!=0)Try(0,0,s);
        if(!cnt) cout<< -1;
        cout <<endl;
    }
}
