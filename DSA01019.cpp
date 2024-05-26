#include <bits/stdc++.h>
using namespace std;
int n;
void Try(int i, string s)
{
    if(i>n){
        cout << s<<endl;
    }
    else{
        if(!(i==n||(s[i-1]=='H')))
        {
            Try(i+1,s+"A");
            Try(i+1,s+"H");
        }
        else
        {
            Try(i+1,s+"A");
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s="H";
        n--;
        Try(1,s);
    }
}
