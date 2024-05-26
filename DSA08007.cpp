//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

vector<ll> res;

void generate()
{
	queue<ll> q;
	q.push(1);
	while(1)
	{
        ll tmp = q.front(); q.pop();
        if(tmp>1e17) break;
        res.push_back(tmp);
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
	generate();
    while(t--)
    {
        ll n;
        cin>>n;
		cout << upper_bound(all(res),n) - res.begin()<<endl;
    }
}
