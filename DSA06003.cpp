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
        int cnt=0;
        for(int i=0; i<n-1; i++)
        {
            int m = min_element(a+i+1,a+n)-a;
            if(a[i]>a[m]){
                swap(a[i],a[m]);
                cnt++;
            }
        }
        cout << cnt;
        cout<< endl;
    }
}
