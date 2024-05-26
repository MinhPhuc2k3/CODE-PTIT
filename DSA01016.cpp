//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int n;
vector<int> a;
vector<string> res;
void Try(int i, int n)
{
    if(n==0)
    {
        string s="";
        s+= "(";
        for(int i=0; i<a.size()-1; i++)
        {
            s+=to_string(a[i])+ " ";
        }
        s+= to_string(a.back())+")";
        res.push_back(s);
        return;
    }
    else if(n>0)
    for(int j=i; j>0; j--)
    {
        a.push_back(j);
        Try(j,n-j);
        a.pop_back();
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
        a.clear();
        res.clear();
        cin>>n;
        Try(n,n);
        cout<< res[0]<<' ';
        res.erase(res.begin());
        sort(all(res),greater<string>());
        for(string s:res) cout <<s<<' ';
        cout << endl;
    }
}

