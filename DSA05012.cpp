//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int C[1001][1001];

void ToHop()
{
    for(int i=0; i<1001; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(j==0||j==i) C[i][j]=1;
            else
            {
                C[i][j]=((long long)(C[i-1][j-1])+C[i-1][j])%mod;
                C[i][j]%=mod;
            }
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    ToHop();
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        cout << C[n][k];
        cout<< endl;
    }
}
