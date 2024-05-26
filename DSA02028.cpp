//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

int n, k, cnt=0;
int a[100], s[100];
vector<int> o;

void Try(int i, int pre)
{
    if(i==k)
    {
        bool check = true;
        int sum = s[o[0]]-s[0];
        for(int i=1; i<o.size(); i++)
        {
            if(sum!=s[o[i]]-s[o[i-1]]) check = false;
        }
        if(s[n]-s[o.back()]!=sum) check = false;
        if(check) {cnt++;}
    }
    else if(i<k)
    for(int j=pre+1; j<=n-k+i; j++)
    {
        o.push_back(j);
        Try(i+1,j);
        o.pop_back();
    }
    return;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    for(int i=1; i<=n; i++) cin>>a[i];
    if(k==1) cnt=1;
    else
    {
        a[0]=s[0]=0;
        for(int i=1; i<=n; i++) s[i]=s[i-1]+a[i];
        Try(1,0);
    }
    cout << cnt;
}
