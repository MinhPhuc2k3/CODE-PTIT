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
        int n;
        cin>>n;
        int a = n/7;
        while((n-7*a)%4!=0&&a>=0)
        {
            a--;
        }
        if(a<0) cout << -1;
        else
        {
            for(int i=1; i<=(n-7*a)/4; i++) cout << 4;
            for(int i=1; i<=a; i++) cout << 7;
        }
        cout << endl;
    }
}

