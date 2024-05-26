#include <bits/stdc++.h>
using namespace std;
int n;
void Try(int i,string s)
{
    if(i>n) cout << s<<endl;
    else{
        if(!(s[i-1]=='6'&&s[i-2]=='6'&&s[i-3]=='6'))
        {
            Try(i+1,s+"6");
            if(i!=n&&s[i-1]!='8') Try(i+1,s+"8");
        }
        else if(i!=n&&s[i-1]!='8') Try(i+1,s+"8");
    }
}

int main()
{
    cin>>n;
    n--;
    string s="8";
    Try(1,s);
}
