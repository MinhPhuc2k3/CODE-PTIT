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
    deque <int> dq;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        ss>>s;
        if(s=="PUSHFRONT"){
            int k;
            ss>>k;
            dq.push_front(k);
        }
        else if(s=="PRINTFRONT"){
            if(!dq.empty()) cout << dq.front();
            else cout << "NONE";
        }
        else if(s=="POPFRONT"){
            if(!dq.empty()) dq.pop_front();
        }
        else if(s=="PUSHBACK"){
            int k;
            ss>>k;
            dq.push_back(k);
        }
        else if(s=="PRINTBACK"){
            if(!dq.empty()) cout << dq.back();
            else cout << "NONE";
        }
        else{
            if(!dq.empty()) dq.pop_back();
        }
        cout<< endl;
    }
}
