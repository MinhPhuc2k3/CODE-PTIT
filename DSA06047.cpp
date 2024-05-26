//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
//Duyet ket hop hai con tro
bool checkPy(ll a[], int n)
{
    sort(a,a+n);
    for(int i=n-1; i>1; i--)
    {
        int l=0, r=i-1;
        while(l<r)
        {
            if(a[r]+a[l]==a[i]) return true;
            (a[r]+a[l]<a[i])? l++:r--;
        }
    }
    return false;
}
//Tim kiem nhi phan
/*bool checkPy(ll a[], int n)
{
    sort(a,a+n);
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            ll *x = lower_bound(a+j+1,a+n,a[i]+a[j]);
            if(*x==a[i]+a[j]) return true;
        }
    }
    return false;
}
*/
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
        ll a[n];
        for(ll &x:a) {cin>>x; x*=x;}
        if(checkPy(a,n)) cout << "YES";
            else cout << "NO";
        cout << endl;
    }
}
