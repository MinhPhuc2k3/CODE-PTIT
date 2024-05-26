//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;


int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    int m=mod;
    for(int i= 0; i<n; i++)
    {
        cin>>a[i];
        m=min(m,a[i]);
    }
    vi res;
    int sum=0;
    for(int i=m; i>=1; i--)
    {
        bool c=true;
        for(int j=0; j<n; j++)
        {
            int x =a[j]/i+1;
            sum+=x;
            if(j>0&&a[j]/x!=a[j-1]/res.back())
            {
                res.clear();
                sum = 0;
                c=false;
                break;
            }
            res.push_back(x);
        }
        if(c) {
            break;
        }
    }
  //  for(int x:res)cout << x<<" ";
 //   cout << endl;
    cout << sum;
}
