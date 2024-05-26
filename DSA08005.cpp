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
    while(t--)
    {
        int n;
        cin>>n;
        queue<string> q;
        vector<string> v;
        q.push("1");
        while(1)
        {
            string tmp = q.front();
            v.push_back(tmp);
            q.pop();
            if(v.size()==n) break;
            q.push(tmp+"0");
            q.push(tmp+"1");
        }
        for(auto x:v) cout << x<<" ";
        cout<< endl;
    }
}

