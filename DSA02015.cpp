//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

string s;

bool check(string s)
{
    if(!s.size()) return false;
    if(s.size()==1&&isalpha(s[0])) return false;
    int cnt = 0;
    for(char c:s)
    {
        if(c=='(') cnt++;
        else if(c==')') cnt--;
        if(cnt<0) return false;
    }
    return cnt == 0;
}



void solve()
{
    bool found = false;
    queue <string> q;
    q.push(s);
    int cnt = 0;
    map<string, int> exist;
    set<string> ans;
    while(!q.empty())
    {
        string tmp = q.front();
        q.pop();
        if(check(tmp))
        {
            ans.insert(tmp);
            found = true;
        }
        if(found) continue;
        for(int i=0; i<tmp.size(); i++)
        {
            if(!isalpha(tmp[i]))
            {
                string str = tmp.substr(0,i)+tmp.substr(i+1);
                if(!exist[str])
                    {
                        exist[str]++;
                        q.push(str);
                    }
            }
        }
    }
    if(ans.size()) for(string x:ans) cout << x<<" ";
    else cout << -1;
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
        cin>>s;
        solve();
        cout<< endl;
    }
}
