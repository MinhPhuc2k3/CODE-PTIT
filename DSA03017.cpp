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
        map<char, int> m;
        priority_queue<int> q;
        string s; int k;
        cin>>k>>s;
        for(int i=0; i<s.size(); i++)
        {
            m[s[i]]++;
        }
        for(auto x:m)
        {
            q.push(x.second);
        }
        while(k--)
        {
            int a = q.top();
            q.pop();a--;
            q.push(a);
        }
        int res=0;
        while(!q.empty())
        {
            int x = q.top(); q.pop();
            res+=x*x;
        }
        cout << res<<endl;
    }
}

