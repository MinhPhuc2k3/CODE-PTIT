//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int n, res;

void Try(int cur, int cnt)
{
    if(cur==1)
    {
        res=min(res,cnt);
    }
    else if(cur>1&&cnt+1<res)
    {
        if(cur%3==0)
            Try(cur/3,cnt+1);
        if(cur%2==0)
            Try(cur/2,cnt+1);
        Try(cur-1,cnt+1);
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
        res=mod;
        cin>>n;
        Try(n,0);
        cout << res<<endl;
    }
}

