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
        int k;
        int x[26]={0};
        string s;
        cin>>k>>s;
        for(int i=0; i<s.size(); i++)
        {
            x[s[i]-'A']++;
        }
        priority_queue<int> q;
        for(int i=0; i<26; i++)
        {
            if(x[i]) q.push(x[i]);
        }
        for(int i=0; i<k; i++)
        {
            int tmp = q.top();
            q.pop();
            tmp--;
            q.push(tmp);
        }
        ll sum=0;
        while(!q.empty()){
            int tmp = q.top();
            sum+=(ll)tmp*tmp;
            q.pop();
        }
        cout << sum<<endl;
    }
}


