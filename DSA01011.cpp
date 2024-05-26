//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

void hvkt(string s)
{
    int i=s.size()-2;
    while(s[i]>=s[i+1]&&i>-1) i--;
    if(i==-1) {
        cout << "BIGGEST";
        return;
    }
    int k=s.size()-1;
    while(s[k]<s[i]) k--;
    swap(s[i],s[k]);
    int l=i+1, r=s.size()-1;
    while(l<r)
    {
        swap(s[l],s[r]);
        l++;r--;
    }
    cout << s;
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
        int T;string s;
        cin>>T>>s;
        cout <<T<<" ";
        hvkt(s);
        cout<< endl;
    }
}

/*3
1 123
2 279134399742
3 987*/

