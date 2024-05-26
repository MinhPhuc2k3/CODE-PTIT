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
        ll a, b;
        cin>>a>>b;
        ll i;
        while(a!=0)
        {
            i=b/a;
            if(a*i-b<0) i++;
            a=a*i-b;
            b*=i;
            cout <<"1/"<<i;
            if(a!=0) cout<<" + ";
        }
        cout<<endl;
    }
}

