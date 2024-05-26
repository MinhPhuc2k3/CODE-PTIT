//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

void merge(int a[],  int b[], int m, int n)
{
    sort(a,a+m+1);
    sort(b,b+n+1);
    vector<int> ans;
    int i=0, j=0;
    while(i<=m&&j<=n)
    {
        if(a[i]<=b[j]) {
            ans.push_back(a[i]);
            i++;
        }
        else{
            ans.push_back(b[j]);
            j++;
        }
    }
    while(i<=m){
        ans.push_back(a[i]); i++;
    }
    while(j<=n){
        ans.push_back(b[j]); j++;
    }
    for(int x:ans) cout << x<<" ";
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
        int m,n;cin>>m>>n;
        int a[m],b[n];
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        merge(a,b,m-1,n-1);
        cout<< endl;
    }
}
