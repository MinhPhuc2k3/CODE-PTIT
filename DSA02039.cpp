//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int n;
vi res;
vector<string> ans;
void Try(int i, int sum)
{
    if(sum==0)
    {
        string s= "(";
        for(int i=0; i< res.size()-1; i++) s+= to_string(res[i])+" ";
        s+= to_string(res.back())+ ") ";
        ans.push_back(s);
    }
    if(sum>0) for(int j=i; j>0; j--)
    {
        res.push_back(j);
        Try(j, sum-j);
        res.pop_back();
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
        res.clear();
        ans.clear();
        cin>>n;
        Try(n,n);
        cout << ans.size()<<endl;
        for(string s:ans) cout << s<< " ";
        cout << endl;
    }
}

