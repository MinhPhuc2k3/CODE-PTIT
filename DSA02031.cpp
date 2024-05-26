#include <bits/stdc++.h>
using namespace std;

int n; int v[10];
void Try(int i, string s)
{
    if(i==n) cout << s<<endl;
    else{
        for(int j=0; j<n; j++)
        {
            if(!v[j])
            {
                v[j]=1;
                if(i>1&&(s[i-1]=='A'||s[i-1]=='E'))
                {
                    if(i<1||s[i-2]=='A'||s[i-2]=='E') Try(i+1,s+(char)(j+'A'));
                    else if(j==0||j=='E'-'A') Try(i+1,s+(char)(j+'A'));
                }
                else Try(i+1,s+(char)(j+'A'));
                v[j]=0;
            }
        }
    }
}

int main()
{
    char c;
    cin>>c;
    n=c-'A'+1;
    string s="";
    Try(0,s);
}
