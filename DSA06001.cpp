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
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        sort(a,a+n, greater<int>());
        int i=0, j=n-1;
        while(i<j)
        {
            cout << a[i]<<' '<<a[j]<<' ';
            i++; j--;
        }
        if(i==j) cout << a[i];
        cout<< endl;
    }
}
