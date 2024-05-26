//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
int n,w,x[101],xopt[101],fopt=-mod;
bool xkt()
{
    int i=n-1;
    while(x[i]==1&&i>-1)
    {
        x[i]=0;
        i--;
    }
    if(i==-1) return false;
    x[i]=1;
    return true;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>w;
    int a[n], c[n];
    memset(x,0,sizeof(x));
    for(int i=0; i<n; i++) cin>>c[i];
    for(int i=0; i<n; i++) cin>>a[i];
    while(xkt())
    {
        int f=0, b=0;
        for(int i=0; i<n; i++) {
            f+=c[i]*x[i];
            b+=a[i]*x[i];
        }
        if(fopt<f&&b<=w)
        {
            fopt=f;
            for(int i=0; i<n;i++) xopt[i]=x[i];
        }
    }
    cout <<fopt<<endl;
    for(int i=0; i<n; i++) cout << xopt[i]<<" ";
}

