//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int n, k;
vector<string> ans;
string ka="";

void Try(string s, int c)
{
    if(s.size()>=n&&ka=="")
    {
        ans.push_back(s);
        return;
    }
    if(s.size()<n)
    {
        if(ka.size()&&(s.size()==0||s.back()=='B')&&ka.size()+s.size()<=n) {
            string tmp=ka; ka="";
            Try(s+tmp,0);
            ka=tmp;
        }
        if(c>0) Try(s+"A",c--);
        Try(s+"B",k);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    string s="";
    for(int i=0;i<k;i++)ka+="A";
    Try(s,k);
    cout<<ans.size()<<endl;
    for(string x:ans)cout << x<<endl;
}

