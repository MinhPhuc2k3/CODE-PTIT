//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vi a,b;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        if(i%2) b.push_back(x);
        else a.push_back(x);
    }
    sort(all(a));
    sort(all(b), greater<int>());
    int k=0, l=0;
    for(int i=0; i<n; i++)
    {
        if(i%2) {
            cout <<b[l]<<" "; l++;
        }
        else {
            cout << a[k]<<" "; k++;
        }
    }
}


