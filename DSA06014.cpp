//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
int snt[1000009];

void sang()
{
    snt[0]=1;
    snt[1]=1;
    for(int i=2; i<sqrt(1000009); i++)
    {
        for(int j=i*i; j<1000009; j+=i)
        {
            snt[j]=1;
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
    sang();
    while(t--)
    {
        int n;
        cin>>n;
        bool c = false;
        for(int i=2; i<=n/2; i++)
        {
            if(!snt[i]&&!snt[n-i])
            {
                c=true;
                cout << i<<" "<<n-i;
                break;
            }
        }
        if(!c) cout << -1;
        cout<< endl;
    }
}
