//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

bool cmp(pii a, pii b)
{
    if(a.second==b.second) return a.first < b.first;
    return a.second>b.second;
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
        int n;
        cin>>n;
        int a[n];
        map<int, int> num;
        for(int &x:a) {
            cin>>x;
            num[x]++;
        }
        vector<pii> s;
        for(int i=0; i<n; i++)
        {
            s.push_back({a[i],num[a[i]]});
        }
        sort(all(s),cmp);
        for(auto x:s) cout << x.first<<" ";
        cout<< endl;
    }
}
