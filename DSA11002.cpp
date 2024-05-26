#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
vector<string> node(1000);

bool isoperator(string s)
{
    char c=s[0];
    if(c=='+'||c=='-'||c=='*'||c=='/')
        return true;
    return false;
}

void inorder(int i)
{
    if(i<=n)
    {
        inorder(2*i);
        inorder(2*i+1);
        if(isoperator(node[i]))
        {

            ll a = stoll(node[2*i]);
            ll b = stoll(node[2*i+1]);
            if(node[i]=="+") node[i]=to_string(a+b);
            else if(node[i]=="-") node[i]=to_string(a-b);
            else if(node[i]=="*")node[i]=to_string(a*b);
            else node[i]=to_string(a/b);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            string s;
            cin>>s;
            node[i]=s;
        }
        inorder(1);
      //  for(string x:node) cout<<x<<"  " ;
        cout << node[1]<<endl;
    }
}
