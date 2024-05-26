//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

int n, k;
int x[1001];

bool skt()
{
    int i=k;
    while(x[i]-x[i-1]==1&&i>0) i--;
    if(i==0) return false;
    x[i]--;
    for(int j=k; j>i; j--)
    {
        x[j]=n-k+j;
    }
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
        for(int i=1; i<=k; i++)
        {
            cin>>x[i];
        }
        if(skt())
        {
            for(int i=1; i<=k; i++) cout << x[i]<<" ";
        }
        else for(int i=1; i<=k; i++) cout << n-k+i<<" ";
        cout<< endl;
    }
}
