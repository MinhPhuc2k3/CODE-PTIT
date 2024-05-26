//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int n,k, res=0, pre=-1,a[101];

void Try(int i, int pre)
{
    if(i>k){
        res++;
        return;
    }
    for(int j=pre+1 ;j<n; j++)
    {
        if(a[j]>a[pre]) Try(i+1,j);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    for(int i=0; i<n; i++) cin>>a[i];
    Try(1,-1);
    cout<<res;
}

