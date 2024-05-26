//Le Minh Phuc CN02
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
    queue <int> q;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        ss>>s;
        if(s=="PUSH") {
            int k;
            ss>>k;
            q.push(k);
        }
        else if(s=="POP"){
            if(!q.empty()) q.pop();
        }
        else if(s=="PRINTFRONT"){
            if(!q.empty()) cout << q.front();
            else cout << "NONE";
        }
        cout<< endl;
    }
}
