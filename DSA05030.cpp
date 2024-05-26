//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int n,m;
ll C[100][100];

void init()
{
    for(int i=0; i<100; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(i==0||j==0||j==i) C[i][j]=1;
            else{
                C[i][j]=C[i-1][j]+C[i-1][j-1];
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
    init();
    while(t--)
    {
        cin>>n>>m;
        cout << C[m+n][n];
        cout<< endl;
    }
}

