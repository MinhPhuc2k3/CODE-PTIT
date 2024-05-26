#include <bits/stdc++.h>
using namespace std;

int n, k;

void Try(int i, string s, int pre)
{
    if(i==k) cout << s<<endl;
    else{
        for(int j=pre; j<=n; j++){
            Try(i+1,s+(char)(j+'A'),j);
        }
    }
}

int main()
{
    char c;
    cin>>c>>k;
    n=c-'A';
    string s="";
    Try(0,s,0);
}
