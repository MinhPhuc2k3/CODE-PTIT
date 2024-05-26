//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        int p[n], q[m], res[n+m-1]={0};
        for(int &x:p) cin>>x;
        for(int &x:q) cin>>x;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                res[i+j]+=p[i]*q[j];
            }
        }
        for(int i=0; i<n+m-1; i++) cout << res[i]<<" ";
        cout << endl;
    }
}

