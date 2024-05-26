//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n, k;
        cin>>m>>n>>k;
        int a[m], b[n];
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        int i=0, j=0;
        int res = 0;
        while(k--)
        {
            if(a[i]<=b[j])
            {
                res=a[i];i++;
            }
            else
            {
                res=b[j];j++;
            }
        }
        cout <<res;
        cout<< endl;
    }
}
