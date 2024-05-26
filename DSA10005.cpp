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
        int degin[1001]={0};
        int degout[1001]={0};
        for(int i=0; i<m; i++)
        {
            int x, y;
            cin>>x>>y;
            degout[x]++;
            degin[y]++;
        }
        int cnt = 0;
        for(int i=0; i<1001; i++)
        {
            if(degin[i]!=degout[i]) {
                cnt++;
            }
        }
        if(!cnt) cout << 1;
        else  cout << 0;
        cout << endl;
    }
}


