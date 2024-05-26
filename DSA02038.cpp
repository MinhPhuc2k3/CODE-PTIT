//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int n, k, a[101];
vi res;

void Try(int i, int pre=1)
{
    if(i>k){
        for(int x:res) cout << x<<" ";
        cout << endl;
        return;
    }
    for(int j=pre; j<=n-k+i; j++)
    {
        res.push_back(a[j]);
        Try(i+1,j+1);
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
        cin>>n>>k;
        for(int i=1; i<=n; i++) cin>>a[i];
        sort(a+1,a+n+1);
        Try(1);
    }
}

