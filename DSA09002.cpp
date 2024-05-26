//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int v;
    cin>>v;
    cin.ignore();
    set<pii>a;
    for(int i=0;i<v; i++)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        int e;
        while(ss>>e) {
            if(i+1<e)
            a.insert({i+1,e});
        }
    }
    for(auto x:a) cout << x.first<<" "<<x.second<<endl;
}

