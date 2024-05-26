#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[11], cnt=0;
vector<int> ans;
void Try(int i, int s){
    if(s==0) {
        cout << "[";
        for(int i=0; i<ans.size()-1; i++) cout << ans[i]<<' ';
        cout << ans.back()<<"]"<<' ';
        cnt++;
    }
    else if(s>0&&i<n){
        for(int j=i; j<n; j++)
        {
            ans.push_back(a[j]);
            Try(j+1,s-a[j]);
            ans.pop_back();
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ans.clear();
        cnt=0;
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        Try(0,k);if(!cnt) cout << -1;
        cout << endl;
    }
}
