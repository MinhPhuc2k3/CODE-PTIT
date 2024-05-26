//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int n, k, x[20], res=mod;
string s[20];

/*bool xkt()
{
    int i=k-1;
    while(x[i]>x[i+1]&&i>0) i--;
    if(i==0) return false;
    int l=k;
    while(x[i]>x[l])l--;
    swap(x[l],x[i]);
    l=i+1;int r=k;
    while(l<r)
    {
        swap(x[l],x[r]);
        l++;r--;
    }
    return true;
}*/

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    for(int i=0; i<n; i++) cin>>s[i];
    for(int i=0; i<k; i++) x[i]=i;
    do
    {
        int ma=-mod,mi=mod;
        for(int i=0; i<n; i++)
        {
            string num = "";
            for(int j=0; j<k; j++)
            {
                num+=s[i][x[j]];

            }
            int tmp = stoi(num);
            ma=max(tmp,ma);
            mi=min(tmp, mi);
        }
        res=min(res,ma-mi);
    }
    while(next_permutation(x,x+k));
    cout << res;
    return 0;
}

