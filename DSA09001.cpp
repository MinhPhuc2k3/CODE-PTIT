//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int v, e;
        cin>>v>>e;
        vector<int> ve[v+1];
        for(int i=0; i<e; i++)
        {
            int x, y;
            cin>>x>>y;
            ve[x].push_back(y);
            ve[y].push_back(x);
        }
        for(int i=1; i<=v; i++)
        {
            sort(all(ve[i]));
            cout << i<<':';
            for(auto x:ve[i]) cout << " "<<x;
            cout << endl;
        }
    }
}

