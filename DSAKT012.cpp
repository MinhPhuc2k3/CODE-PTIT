//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

int n,s, res=mod;
int t[31];

void Try(int i, int sum = 0, int pre=-1)
{
    if(sum==s)
    {
        res=min(i,res);
    }
    else if(sum<s&&i<res)
    {
        for(int j=pre+1; j<n; j++)
        {
            Try(i+1,sum+t[j],j);
        }
    }
}

int main()
{
    cin>>n>>s;
    for(int i=0; i<n; i++) cin>>t[i];
    Try(0);
    if(res==mod) res=-1;
    cout << res;
}
