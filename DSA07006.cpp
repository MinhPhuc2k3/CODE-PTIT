//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

stack<int> st;
vector<ii> p;
string s;
set<string> ans;
vector<ii> x;

void Try(int i)
{
    if(i>0)
    {
        string tmp = s, tmp1="";
        for(int i=0; i<x.size(); i++)
        {
            tmp[x[i].first]='|';
            tmp[x[i].second]='|';
        }
        for(int i=0; i<tmp.size(); i++)
        {
            if(tmp[i]!='|') tmp1+=tmp[i];
        }
        ans.insert(tmp1);
    }
    if(i>=p.size()) return;
    for(int j=i; j<p.size(); j++)
    {
        x.push_back(p[j]);
        Try(j+1);
        x.pop_back();
    }
}

int main()
{
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(') st.push(i);
        else if(s[i]==')')
        {
            p.push_back({st.top(),i});
            st.pop();
        }
    }
    Try(0);
    for(auto ss:ans)
    {
        cout << ss;
        cout << endl;
    }
}
