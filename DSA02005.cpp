#include <bits/stdc++.h>
using namespace std;

int visited[11];

void Try(int i, string s, int n, string x)
{
    if(i==n) cout << x<<' ';
    else{
        for(int j=0; j<n; j++)
        {
            if(!visited[j]){
                visited[j]=1;
                Try(i+1,s,n,x+s[j]);
                visited[j]=0;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        memset(visited,0,sizeof(visited));
        string s;
        cin>>s;
        int n=s.size();
        string x="";
        Try(0,s,n,x);
        cout << endl;
    }
}
