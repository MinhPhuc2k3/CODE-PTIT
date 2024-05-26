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
        int prefixsum[n];
        prefixsum[0]=a[0];
        for(int i=1; i<n; i++)
        {
            prefixsum[i]=a[i]+prefixsum[i-1];
        }
        int res=-2;
        for(int i=1; i<n-1; i++)
        {
            if(prefixsum[i-1]==prefixsum[n-1]-prefixsum[i])
                res = i;
        }
        cout << res+1;
        cout<< endl;
    }
}
