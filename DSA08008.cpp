//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

vector<ll> bdn;

void kt()
{
    queue <ll> q;
    q.push(1);
    while(1)
    {
        ll tmp = q.front();
        q.pop();
        if(tmp>=112e16) return;
        bdn.push_back(tmp);
        q.push(tmp*10);
        q.push(tmp*10+1);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    kt();
    vector<ll> ans(1001);
    for(int i=1; i<=1000; i++)
    {
        for(int j=1; j<bdn.size(); j++)
        {
            if(bdn[j]%i==0) {
                ans[i]=bdn[j];
                break;
            }
        }
    }
    while(t--)
    {
        ll n;
        cin>>n;
        cout << ans[n];
        cout<< endl;
    }
}

