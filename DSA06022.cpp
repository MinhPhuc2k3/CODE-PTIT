//Le Minh Phuc B21DDCN098
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
        int a[n];
        for(int &x:a)  cin>>x;
        set<int> num;
        for(int x:a) num.insert(x);
        if (num.size()==1) cout << -1;
        else{
            auto it= num.begin();
            cout << *(it++); cout<<" "<< *it;
        }
        cout<< endl;
    }
}
