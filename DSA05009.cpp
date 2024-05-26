//Le Minh Phuc B21DDCN098
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
int n, a[101];
bool check = false;
void Try(int i,int sum)
{
    if(i==n) if(sum==0)check =true;
    else{
        for(int j=i; j<n; j++)
        {
            Try(j+1, sum-a[j]);
        }
    }
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
        check=true;
        cin>>n;
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2) cout << "NO";
        else{
            Try(0,sum/2);
            if(check) cout << "YES";
            else cout << "NO";
        }
        cout<< endl;
    }
}
