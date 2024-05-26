#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(auto &x:a) cin>>x;
        int i=0;
        bool check=true;
        while(i<n/2)
        {
            if(min(a[i],a[n-1-i])>min(a[i+1],a[n-i-2])) {
                check=false;
                break;
            }
            if(max(a[i],a[n-1-i])<max(a[i+1],a[n-i-2]))
            {
                check = false;
                break;
            }
            i++;
        }
        if(check) cout <<"Yes";
        else cout << "No";
        cout << endl;
    }
}
