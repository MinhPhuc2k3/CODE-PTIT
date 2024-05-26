//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

typedef struct matrix
{
    ll a[2][2];
    matrix operator*(matrix b)
    {
        matrix res;
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                res.a[i][j]=0;
                for(int k=0; k<2; k++)
                {
                    res.a[i][j]+=(a[i][k]*b.a[k][j])%mod;
                    res.a[i][j]%=mod;
                }
            }
        }
        return res;
    }
} matrix;

matrix pow(matrix x, int n)
{
    if(n==1) return x;
    matrix res = pow(x,n/2);
    if(n&1) return res*res*x;
    else return res*res;
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
        int n;
        cin>>n;
        matrix fibo;
        fibo.a[0][0]=1;
        fibo.a[0][1]=1;
        fibo.a[1][0]=1;
        fibo.a[1][1]=0;
        fibo = pow(fibo,n);
        cout<<fibo.a[1][0];
        cout << endl;
    }
}

