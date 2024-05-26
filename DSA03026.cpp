//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int n, s;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, sum;
    cin>>n>>sum;
    int len= n, s=sum;
    vi n1, n2;
    while(len>1&&s>=1)
    {
        int x = (s-1>9)? 9:s-1;
        s-=x;
        len--;
        n1.push_back(x);
    }
    if(s>9||s<=0) cout << -1<<" "<<-1<<endl;
    else {
        cout << s;
        for(int i=n1.size()-1; i>=0; i--) cout << n1[i];
        cout << " ";
        len=n; s=sum;
        while(len>1)
        {
            int x = (s>9)? 9:s;
            s-=x;
            len--;
            n2.push_back(x);
        }
        for(int i=0; i<n2.size(); i++) cout << n2[i];
        cout << s;
        cout << endl;
    }
}

