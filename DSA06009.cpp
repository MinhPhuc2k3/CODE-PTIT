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
        int n, k;
        cin>>n>>k;
        int a[n];
        map<int,int> ap;
        for(int &x:a)
        {
            cin>>x;
        }
        long long cnt=0;
        for(int i=0; i<n; i++)
        {
            if(ap[k-a[i]]) cnt+=ap[k-a[i]];
            ap[a[i]]++;
        }
        cout<<cnt;
        cout<< endl;
    }
}
