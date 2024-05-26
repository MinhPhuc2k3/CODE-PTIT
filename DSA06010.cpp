//Le Minh Phuc B21DDCN098
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
        cin.ignore();
        string s;
        getline(cin,s);
        set<int> num;
        for(char c:s)
        {
            if(c!=' ') num.insert((int)(c-48));
        }
        for(int x:num) cout << x<<" ";
        cout<< endl;
    }
}
