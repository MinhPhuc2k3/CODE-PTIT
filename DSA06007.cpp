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
        int a[n], b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        int i=0, j=n-1;
        while(a[i]==b[i]) i++;
        while(a[j]==b[j]) j--;
        cout << i+1 <<" "<< j+1;
        cout<< endl;
    }
}
