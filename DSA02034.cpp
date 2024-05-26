#include <bits/stdc++.h>
using namespace std;
int n, v[100];
vector <int> ans;
void Try(int i)
{
    if(i>n) {
        for(auto x:ans) cout << x;
        cout << endl;
    }
    else{
        for(int j=1; j<=n; j++){
            if(!v[j])
            if(i==1||abs(ans.back()-j)!=1){
                v[j]=1;
                ans.push_back(j);
                Try(i+1);
                ans.pop_back();
                v[j]=0;
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(v,0,sizeof(v));
        ans.clear();
        cin>>n;
        Try(1);
    }
}
