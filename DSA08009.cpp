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
        int s, t;
        cin>>s>>t;
        queue<pii> q;
        map<int,int> m;
        q.push({s,0});
        while(1)
        {
            pii tmp = q.front();
            m[tmp.first]++;
            if(!q.empty())q.pop();
            if(tmp.first == t) {
                cout <<tmp.second<<endl;
                break;
            }
            if(tmp.first>0&&!m[tmp.first-1])
            {
                q.push({tmp.first-1,tmp.second+1});
            }
            if(tmp.first<t&&!m[tmp.first*2])
            {
                q.push({tmp.first*2,tmp.second+1});
            }
        }
    }
}


