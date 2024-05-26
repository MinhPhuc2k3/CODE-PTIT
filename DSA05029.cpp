//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int countWays(string s, int n)
{
    if(n==1||n==0) return 1;
    int cnt=0;
    if(s[n-1]>'0') cnt += countWays(s,n-1);
    if((s[n-2]=='2'&&s[n-1]<'7')||s[n-2]=='1')
    {
        cnt+=countWays(s,n-2);
    }
    return cnt;
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
        string s;
        cin>>s;
        int n = s.size();
        if((n==0||s[0]=='0')) cout << 0;
        else cout<< countWays(s,n);
        cout<< endl;
    }
}
