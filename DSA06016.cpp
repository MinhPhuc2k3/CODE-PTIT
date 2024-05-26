//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;cin>>m>>n;
        int a[m],b[n];
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        sort(a,a+n, greater<int>());
        sort(b,b+n);
        cout << (long long)a[0]*b[0];
        cout<< endl;
    }
}
