//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int n, res=mod;
vector<string> vs;
int x[11];
int tinh(int i, int j)
{
    int k=0,l=0,cnt=0;
    while(k<vs[i].size()&&l<vs[j].size())
    {
        if(vs[i][k]==vs[j][l]) {
            cnt++;
            k++;l++;
        }
        else if(vs[i][k]<vs[j][l]) k++;
        else l++;
    }
    return cnt;
}

bool xkt()
{
    int i=n-1;
    while(x[i]>x[i+1]&&i>0) i--;
    if(i==0) return false;
    int k=n;
    while(x[k]<x[i])k--;
    swap(x[k],x[i]);
    int l=i+1, r=n;
    while(l<r)
    {
        swap(x[l],x[r]);
        l++;r--;
    }
    return true;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=0; i<n; i++) {
        string s;
        cin>>s;
        vs.push_back(s);
    }
    for(int i=1; i<=n; i++) x[i]=i;
    int cnt = 0;
    for(int i=2; i<=n; i++)
    {
        cnt+=tinh(x[i]-1,x[i-1]-1);
    }
    res=min(res,cnt);
    while(xkt())
    {
        int cnt = 0;
        for(int i=2; i<=n; i++)
        {
            cnt+=tinh(x[i]-1,x[i-1]-1);
        }
        res=min(res,cnt);
    }
    cout << res;
}

