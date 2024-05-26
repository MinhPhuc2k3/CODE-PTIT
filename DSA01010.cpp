//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int n, k;
int x[21];

bool xkt()
{
    int i = k;
    while(x[i]==n-k+i&&i>0) i--;
    if(i==0)return false;
    x[i]++;
    for(int j=i+1; j<=k; j++) x[j]=j-i+x[i];
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
        cin>>n>>k;
        int l[n+1]={0};
        memset(x,0,sizeof(x));
        for(int i=1; i<=k; i++)
        {
            cin>>x[i];
            l[x[i]]++;
        }
        if(xkt()){
            for(int i=1; i<=k; i++) l[x[i]]++;
            int cnt = 0;
            for(int x:l) if(x==2) cnt++;
            cout << k-cnt;
        }
        else cout <<k;
        cout<< endl;
    }
}

