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
        q.push(0);
        ll cnt=0;
        ll x=pow(10,n);
        while(1)
        {
            ll tmp = q.front();
            q.pop();
            if(tmp/x>0) break;
            if(tmp>0)res.push_back(tmp);
            cnt++;
            q.push(tmp*10+6);
            q.push(tmp*10+8);
        }
        cout << cnt-1<<endl;
        for(ll x:res) cout << x<<" ";
        cout<< endl;
    }
}

