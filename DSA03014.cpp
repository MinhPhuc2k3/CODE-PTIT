//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

string s;
int x[19];
map<ll, int> lp;

bool npkt(int x[], int n)
{
    int i=n;
    while(x[i]==1&&i>0)
    {
        x[i]=0;i--;
    }
    if(!i) return false;
    x[i]=1;
    return true;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int i=0; i<=100000; i++)
    {
        lp[(ll)i*i*i]++;
    }
    while(t--)
    {
        memset(x,0,sizeof(x));
        cin>>s;
        int res = -1;
        int n = s.size();
        do
        {
            string tmp = s;
            for(int i=n; i>0; i--)
            {
                if(x[i]==1)
                        tmp.erase(tmp.begin()+(i-1));
            }
            if(tmp!=""&&lp[stoll(tmp)]){
                res = max(res,stoll(tmp));
            }
        }
        while(npkt(x,n));
        cout<< res;
        cout<< endl;
    }
}
