//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

ll a[5], x[6];
bool check = false;
//int cnt = 0;

void Try(ll res, int i)
{
    if(i==5)
    {
        //cnt++;
        if(res == 23) check = true;
        return;
    }
    Try(res+a[x[i]], i+1);
    Try(res-a[x[i]], i+1);
    Try(res*a[x[i]], i+1);
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
        for(int i=0; i<5; i++)  x[i]=i;
        for(int i=0; i<5; i++) cin>>a[i];
        check = false;
        //cnt=0;
        do
        {
            Try(a[x[0]],1);
        }
        while(next_permutation(x,x+5));
        if(check) cout << "YES";
        else cout << "NO";
        //cout << cnt;
        cout<< endl;
    }
}
