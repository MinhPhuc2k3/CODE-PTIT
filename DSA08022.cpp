#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--)
    {
        int n; cin>>n;
        int a[n]; 
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n, greater<int> ());
        int sum = 0;
        vector <int> r1;
        vector <int> r2;
        for(int i=0; i<n; i++) 
        {
            sum+=a[i];
            if(a[i]%3==1) r1.push_back(i);
            if(a[i]%3==2) r2.push_back(i);
        }
        if(sum%3==0)
        {
            for(int x:a) cout << x;
        }
        else if(sum%3==1)
        {
            if(r1.size()&&n!=1)
            {
                for(int i=0; i<n; i++) if(i!=r1.back()) cout << a[i]; 
            }
            else if(r2.size()>=2&&n!=2)
            {
                for(int i=0; i<n ;i++) if(i!=r2.back()&&i!=r2[r2.size()-2]) cout << a[i];
            }
            else cout << -1;
        }
        else if(sum%3==2)
        {
            if(r2.size()&&n!=1)
            {
                for(int i=0; i<n; i++) if(i!=r2.back()) cout << a[i]; 
            }
            else if(r1.size()>=2&&n!=2)
            {
                for(int i=0; i<n ;i++) if(i!=r1.back()&&i!=r1[r1.size()-2]) cout << a[i];
            }
            else cout << -1;
        }
        cout << endl;
    }
}