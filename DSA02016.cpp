#include <bits/stdc++.h>
using namespace std;

int n, a[101][101],cnt;

bool accept(int i, int j)
{
    int x=1;
    while(i-x>=0){
        if(a[i-x][j]) return false;
        if(j-x>=0&&a[i-x][j-x]) return false;
        if(j+x<n&&a[i-x][j+x]) return false;
        x++;
    }
    return true;
}

void Try(int i)
{
    if(i==n) {
        cnt++;
    }
    else{
        for(int j=0; j<n; j++){
            if(accept(i,j))
            {
                a[i][j]=1;
                Try(i+1);
                a[i][j]=0;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)a[i][j]=0;
        cnt=0;
        Try(0);
        cout << cnt<<endl;
    }
}
