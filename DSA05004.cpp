//Le Minh Phuc B21DDCN098
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
    int n;
    cin>>n;
    int a[n];
    for(int &x:a) cin>>x;
    vector <int> lcs;
    lcs.push_back(a[0]);
    for(int x:a){
        int i = lower_bound(all(lcs),x)-lcs.begin();
        if(i==lcs.size()) lcs.push_back(x);
        else lcs[i]=x;
    }
    cout << lcs.size();
}
