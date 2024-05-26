#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    set<string> name;
    for(int i=1; i<=n; i++){
        string s;
        cin>>s;
        name.insert(s);
    }
    vector<string> na;
    for(auto x:name) na.push_back(x);
    int a[k+2];
    for(int i=0; i<=k; i++) a[i]=i;
    int nn=na.size();
    while(1){
        for(int i = 1; i<=k; i++) cout <<na[a[i]-1]<<' ';
        cout << endl;
        int i=k;
        while(a[i]==nn-k+i&&i>0) i--;
        if(!i) break;
        else{
            a[i]++;
            for(int j=i+1; j<=k; j++) a[j]=a[i]+j-i;
        }
    }
    return 0;
}
