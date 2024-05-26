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
    int n;
    ll var[11][11];
    void nhapn(){
        cin>>n;
    }
    void nhap()
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>var[i][j];
            }
        }
    }
    void xuat()
    {
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
            {
                cout << var[i][j]<<" ";
            }
            cout << endl;
        }
    }
    matrix operator*(matrix x)
    {
        matrix res;
        res.n = n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                res.var[i][j]=0;
                for(int k=0; k<n; k++)
                {
                    res.var[i][j]+=(var[i][k]*x.var[k][j])%mod;
                    res.var[i][j]%=mod;
                }
            }
        }
        return res;
    }
} matrix;

matrix pow(matrix x, int k)
{
    if(k==1) return x;
    matrix tmp = pow(x,k/2);
    if(k&1) return tmp*tmp*x;
    else return tmp*tmp;
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
        int k;
        matrix x;
        x.nhapn();
        cin>>k;
        x.nhap();
        x=pow(x,k);
        x.xuat();
        cout << endl;
    }
}

