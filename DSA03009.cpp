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
        int n, cnt=0;
        cin>>n;
        vector<pii> a;
        for(int i=0; i<n; i++)
        {
            int x, y, z;
            cin>>x>>y>>z;
            cnt=max(cnt,y);
            a.push_back({y,z});
        }
        sort(all(a),[](pii x, pii y)
             {
                return x.second>y.second;
             });
        int res = 0, ocu[cnt+1]={0};
        cnt=0;
        for(pii x:a)
        {
            for(int i = x.first; i>0; i--)
            {
                if(!ocu[i]){
                    ocu[i]=1;
                    res+=x.second;
                    cnt++;
                    break;
                }
            }
        }
        cout << cnt<<" "<<res<<endl;
    }
}

