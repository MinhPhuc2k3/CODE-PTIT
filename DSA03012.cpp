#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int> sy;
        for(auto c:s) sy[c]++;
        int n = s.size();
        bool check = true;
        int m=-1;
        for(auto x:sy){
            if(m<x.second) m=x.second;
        }
        if(n-m<m-1) check = false;
        if(check) cout << 1;
        else cout << -1;
        cout << endl;
    }
}
