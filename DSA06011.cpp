//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

bool cmp(int a, int b)
{
    return abs(a)<abs(b);
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
        int n, sum=mod;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++){
                if(abs(sum)>abs(a[i]+a[j])) sum=a[i]+a[j];
            }
        }
        cout << sum;
        cout<< endl;
    }
}
