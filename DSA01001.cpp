#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string x;
        cin>>x;
        int i=x.size()-1;
        while(x[i]=='1'&&i>=0) i--;
        if(i==-1) for(int i=0; i<x.size(); i++) cout << 0;
        else{
            x[i]='1';
            for(int j=i+1; j<x.size(); j++) x[j]='0';
            cout << x;
        }
        cout << endl;
    }
}
