//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
int u;
bool cmp(int a, int b)
{
    return abs(u-a)<abs(u-b);
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
        int n;
        cin>>n>>u;
        int a[n];
        for(int &x:a) cin>>x;
        stable_sort(a,a+n,cmp);
        for(int x:a) cout << x<< " ";
        cout<< endl;
    }
}
