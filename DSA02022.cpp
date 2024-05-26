#include <bits/stdc++.h>
using namespace std;

void Try(int i, string s)
{
    if(i==9) cout << s<<endl;
    else
    {
        if(i==1) {
            Try(i+2,s+"02/");
            Try(i+2,s+"20/");
            Try(i+2,s+"22/");
        }
        else if(i==3) Try(i+3,s+"02/2");
        else
        {
            Try(i+1,s+"0");
            Try(i+1,s+"2");
        }
    }
}

int main()
{
    string s="";
    Try(1,s);
}
