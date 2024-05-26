//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

int n, s, cnt;
int a[21];
vector<int> x;

void Try(int pre=0,int sum = 0)
{
    if(sum==s)
    {
        cnt++;
        cout<<"[";
        for(int i=0; i<x.size()-1; i++)
        {
            cout << x[i]<<" ";
        }
        cout << x.back()<<"]";
    }
    else if(sum<s)
    {
        for(int i=pre; i<n; i++)
        {
            x.push_back(a[i]);
            Try(i,sum+a[i]);
            x.pop_back();
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
    while(t--)
    {
        cin>>n>>s;
        for(int i=0; i<n; i++) cin>>a[i];
        x.clear();
        cnt=0;
        Try();
        if(cnt==0) cout << -1;
        cout<< endl;
    }
}
