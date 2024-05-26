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
        int res = -mod;
        int k;
        cin>>k;
        string s;
        cin>>s;
        for(int i=0; i<s.size()-1&&k; i++)
        {
            int x = i;
            res = max(res,stoi(s));
            for(int j=s.size(); j>i; j--)
            {
                if(s[j]>s[x]) x = j;
            }
            if(s[i]<s[x]) {
                swap(s[i],s[x]);
                k--;
            }
        }
        cout << max(res,stoi(s));
        cout<< endl;
    }
}

