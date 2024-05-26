//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int n;
string str;
vector<string> ans;
void Try(int i, string res="")
{   if(res!="")ans.push_back(res);
    for(int j=i; j<str.size(); j++)
    {
        Try(j+1, res+str[j]);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ans.clear();
        cin>>n;
        cin>>str;
        Try(0);
        for(auto s:ans) cout <<s<<" ";
        cout <<endl;
    }
}

