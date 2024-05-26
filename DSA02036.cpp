//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int n, a[16];
vector<int> res;
vector<vi> ans;

void Try(int m, int sum)
{
    if(sum%2)
    {
            ans.push_back(res);
    }
    if(m<n)
    for(int i = m; i<n; i++)
    {
        res.push_back(a[i]);
        Try(i+1, sum+a[i]);
        res.pop_back();
    }
    return;
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
        cin>>n;
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n,greater<int>());
        ans.clear();
        res.clear();
        Try(0,0);
        sort(all(ans));
        for(auto x:ans){
            {
                for(int i:x) cout <<i<<" ";
            }cout <<endl;
        }
    }
}

