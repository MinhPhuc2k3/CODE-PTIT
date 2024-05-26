//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int n, k, a[21];
vi res;
vector<string> ans;

void Try(int s, int pre)
{
    if(s==0)
    {
        string v="";
        v+= "{";
        for(int i=0; i<res.size()-1; i++) v+= to_string(res[i])+" ";
        v+= to_string(res.back())+"}";
        ans.push_back(v);
    }
    if(s>0)
    for(int i=pre; i<n; i++)
    {
        res.push_back(a[i]);
        Try(s-a[i],i);
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
        cin>>n>>k;
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        Try(k,0);
        if(!ans.size()) {
            cout << -1<<endl;
            continue;
        }
        cout << ans.size();
        for(string x:ans) cout << " "<<x;
        cout << endl;
    }
}

