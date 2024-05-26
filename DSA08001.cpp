//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end();
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        queue <int> q;
        while(n--)
        {
            int s;
            cin>>s;
            switch(s){
                case 1:{
                    cout << q.size();
                    break;
                    }
                case 2:{
                    if(q.empty()) cout << "YES";
                    else cout << "NO";
                    break;
                }
                case 3:{
                    int k; cin>>k;
                    q.push(k);
                    break;
                }
                case 4:{
                    if(!q.empty()) q.pop();
                    break;
                }
                case 5:{
                    if(!q.empty()) cout << q.front();
                    else cout << -1;
                    break;
                }
                default:{
                    if(!q.empty()) cout << q.back();
                    else cout << -1;
                    break;
                }
            }
            cout << endl;
        }
        cout<< endl;
    }
}
