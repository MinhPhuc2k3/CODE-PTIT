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
    int n;cin>>n;
    string s;
    cin>>s;
    int cnt =0;
    int count[2]={0};
    for(auto x:s)
    {
        if(x=='X') count[0]++;
        else if(x=='T') count[1]++;
        else count[2]++;
    }
    //tham lam X
    for(int i=0; i<count[0]; i++)
    {
        if(s[i]=='D') for(int j=n-1; j>i; j--)
        {
            if(s[j]=='X'){
                swap(s[i],s[j]);
                cnt++;
               // cout << s<<endl;
                break;
            }
        }
        if(s[i]=='T') for(int j=count[0]; j<n; j++)
        {
            if(s[j]=='X'){
                swap(s[i],s[j]);
                cnt++;
               // cout << s<<endl;
                break;
            }
        }
    }
    //tham lam TD
    for(int i=n-1; i>=count[0]+count[1]; i--)
    {
        if(s[i]=='T') for(int j=count[0]; j<i; j++)
        {
            if(s[j]=='D'){
                swap(s[i],s[j]);
                cnt++;
              //  cout <<s<<endl;
                break;
            }
        }
    }
//    cout <<s<<endl;
    cout <<cnt;
}
