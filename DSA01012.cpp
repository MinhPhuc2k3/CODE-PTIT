//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int n, x[11];

bool xkt()
{
    int i=n;
    while(x[i]==1&&i>0)
    {
        x[i]=0;
        i--;
    }
    if(i==0) return false;
    x[i]=1;
    return true;
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
        cin>>n;
        memset(x,0,sizeof(x));
        cout << x[1];
        for(int i=2; i<=n; i++) cout <<(x[i]^x[i-1]);
        while(xkt())
        {
            cout << " ";
            cout << x[1];
            for(int i=2; i<=n; i++) cout <<(x[i]^x[i-1]);
        }
        cout<< endl;
    }
}

