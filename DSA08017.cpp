//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
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
        int n;
        cin>>n;
        vector<ll> res;
        queue <ll> q;
        q.push(6);
        q.push(8);
        ll x=pow(10,n);
        while(1)
        {
            ll tmp = q.front();
            q.pop();
            if(tmp/x>0) break;
            res.push_back(tmp);
            q.push(tmp*10+6);
            q.push(tmp*10+8);
        }
        for(int i=res.size()-1; i>=0; i--)
        {
            cout << res[i]<<" ";
        }
        cout<< endl;
    }
}

