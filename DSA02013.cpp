//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int n, p, s;

bool isPrime(int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0) return false;
    }
    return n>1;
}

vi snt;
vi res;
vector<vi> ans;

void Try(int i,int pre, int s)
{
    if(i==n+1&&s==0){
        ans.push_back(res);
    }
    else if(s>=0&&i<=n)
    {
        for(int j=pre; snt[j]<=s; j++)
        {
            res.push_back(snt[j]);
            Try(i+1,j+1,s-snt[j]);
            res.pop_back();
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int i=2; i<=200; i++)
    {
        if(isPrime(i)) snt.push_back(i);
    }
    while(t--)
    {
        cin>>n>>p>>s;
        ans.clear();
        res.clear();
        int i;
        for(i =0; snt[i]<=p; i++){}
        Try(1,i,s);
        cout << ans.size()<<endl;
        for(auto x:ans) {for(auto i:x) cout << i<<" "; cout << endl;}
    }
}

