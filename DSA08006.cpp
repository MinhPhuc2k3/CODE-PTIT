//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

vector<ll> res;
void generat()
{
    queue <ll> q;
    q.push(9);
    while(1)
    {
        ll tmp = q.front();q.pop();
        if(tmp>=1e18) break;
        res.push_back(tmp);
        q.push(tmp*10);
        q.push(tmp*10+9);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<ll>ans(101);
    generat();
    int cnt = 0;
    for(int i=1; i<=100; i++)
    {
        for(int j=0; j<res.size(); j++)
        {
            if(res[j]%i==0)
            {
                ans[i]=res[j];
                cnt++;
                break;
            }
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout << ans[n];
        cout<< endl;
    }
}

