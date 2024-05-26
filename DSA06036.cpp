//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

bool check(int a[], int n, int k)
{
    for(int i=0; i<n-2; i++)
        {
            int l=i+1, r=n-1;
            while(l<r)
            {
                if(a[i]+a[l]+a[r]==k) return true;
                else if(a[i]+a[l]+a[r]>k) r--;
                else l++;
            }
        }
        return false;
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
        int n, k;
        cin>>n>>k;
        int a[n];
        set<int> s;
        for(int &x:a) {
            cin>>x;
            s.insert(x);
        }
        sort(a,a+n);
        if(check(a,n,k)) cout << "YES";
        else cout << "NO";
        cout<< endl;
    }
}
