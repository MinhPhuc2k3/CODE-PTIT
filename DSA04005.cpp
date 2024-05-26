#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

ll F[94];

void solve(ll n, ll k)
{
    if(n==1) cout << "A";
    else if(n==2) cout << "B";
    else if(k<=F[n-2]) solve(n-2,k);
    else solve(n-1,k-F[n-2]);
}

int main()
{
    int t;
    cin>>t;
    F[1]=1; F[2]=1;
    for(int i=3; i<=93; i++) F[i]=F[i-1]+F[i-2];
    while(t--)
    {
        ll n, k;
        cin>>n>>k;
        solve(n,k);
        cout<< endl;
    }
}
