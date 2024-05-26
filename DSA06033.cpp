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
        int idxMin[n], idxMax[n];
        idxMin[0]=0; idxMax[0]=n-1;
        for(int i=1; i<n; i++)
        {
            idxMin[i] =a[i]<a[idxMin[i-1]]? i:idxMin[i-1];

            idxMax[i] =a[n-i-1]>a[idxMax[i-1]]? (n-i-1):idxMax[i-1];
        }
        int res=-1;
        int i=0, j=n-1;
        while(i<n&&j>=0)
        {
            if(a[idxMax[j]]>a[idxMin[i]])
            {
                res=max(res,idxMax[j]-idxMin[i]);
                j--;
            }
            else i++;
        }
        cout << res;
        cout<< endl;
    }
}
