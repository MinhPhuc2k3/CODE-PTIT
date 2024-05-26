#include <bits/stdc++.h>
using namespace std;

long long convert(string s)
{
    reverse(s.begin(), s.end());
    long long tmp = 0;
    for(long long i=0; i<s.size(); i++)
    {
        tmp+=(s[i]-'0')*pow(2,i);
    }
    return tmp;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1, s2;
        cin>>s1>>s2;
        cout << convert(s1)*convert(s2)<<endl;
    }
}
