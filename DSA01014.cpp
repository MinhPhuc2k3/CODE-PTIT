//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int n, k, s, res=0;
vector<int> ans;
void Try(int idx, int i, int sum)
{
    if(idx>k)
    {
        if(sum==0)
        res++;
        return;
    }
    if(sum>0)
    for(int j=i; j<=n-k+idx; j++)
    {
        ans.push_back(j);
        Try(idx+1,j+1,sum-j);
        ans.pop_back();
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k>>s;

    while(n!=0||k!=0||s!=0)
    {
        res=0;
        Try(1,1,s);
        cout << res<<endl;
        cin>>n>>k>>s;
    }
}

