//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

string s;
vector<string> res;
bool calc(string s)
{
    int a = stoi(s.substr(0,2)),b = stoi(s.substr(5,2)),c=stoi(s.substr(10,2));
    char op = s[3];
    if(op== '+')
        a+=b;
    else
        a-=b;
    return a==c;
}

void Try(int i)
{
    if(i==s.size())
    {
        if(calc(s)) res.push_back(s);
        return;
    }
    if(s[i]=='?')
    {
        if(i==3)
        {
            s[i]='+';Try(i+2);
            s[i]='-';Try(i+2);
            s[i]='?';
        }
        else
        {
            if(i==1||i==6||i==s.size()-1)
            {
                s[i]='0';
                Try(i+1);
                s[i]='?';
            }
            for(int j=1; j<=9; j++)
            {
                s[i]=j+'0';
                Try(i+1);
                s[i]='?';
            }
        }
    }
    else Try(i+1);
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        res.clear();
        getline(cin,s);
        if(s[3]=='*'||s[3]=='/')
        {
            cout << "WRONG PROBLEM!"<<endl;
            continue;
        }
        Try(0);
        if(res.size()) cout << res[0];
        else cout << "WRONG PROBLEM!";
        cout << endl;
    }
}

