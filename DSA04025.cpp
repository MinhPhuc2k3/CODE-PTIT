//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

typedef struct matrix
{
    int n;
    ll m[11][11];
    matrix operator*(matrix b)
    {
        matrix res;
        res.n=n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                res.m[i][j]=0;
                for(int k=0; k<n; k++)
                {
                    res.m[i][j]+=(m[i][k]%mod*b.m[k][j]%mod)%mod;
                    res.m[i][j]%=mod;
                }
            }
        }
        return res;
    }
} matrix;

matrix pow(matrix a, int k)
{
    if(k==1) return a;
    matrix x = pow(a,k/2);
    if(k%2) return x*x*a;
    else return x*x;
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
        matrix a;
        int n;
        cin>>n;
        a.n=2;
        a.m[0][0]=1;
        a.m[0][1]=1;
        a.m[1][0]=1;
        a.m[1][1]=0;
        a=pow(a,n);
        cout << a.m[1][0];
        cout<< endl;
    }
}
