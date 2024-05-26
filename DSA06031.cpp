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
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int &x:a) cin>>x;
        deque<int> sub;
        int i=-1;
        while(i<n)
        {
            i++;
            if(i>=k)cout << a[sub.front()]<<" ";
            while(!sub.empty()&&sub.front()<i-k+1) sub.pop_front();
            while(!sub.empty()&&a[sub.back()]<=a[i]) sub.pop_back();
            sub.push_back(i);
        }
        cout<< endl;
    }
}
