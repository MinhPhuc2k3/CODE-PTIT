//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

string add(string a, string b)
{
    string c = a;
    string d = b;
    reverse(all(a));
    reverse(all(b));
    while(a.size()<b.size()) a+="0";
    while(a.size()>b.size()) b+="0";
    string sum="";
    int carry=0;
    for(int i=0; i<a.size(); i++)
    {
        int tmp = a[i]-'0'+b[i]-'0'+carry;
        if(carry) carry--;
        sum+=to_string(tmp%10);
        carry = tmp/10;
    }
    if(carry>0) sum+= to_string(carry);
    a=c;b=d;
    reverse(all(sum));
    return sum;
}

string multiply1(string a, int b)
{
    string res="";
    string c=a;
    reverse(all(a));
    int carry=0;
    for(int i=0; i<a.size(); i++)
    {
        int tmp = b*(a[i]-'0')+carry;
        res+=to_string(tmp%10);
        carry=tmp/10;
    }
    if(carry) res+=to_string(carry);
    a=c;
    reverse(all(res));
    return res;
}

string multiply2(string a, string b)
{
    string res="";
    reverse(all(a));
    string c=a;
    for(int i=0; i<a.size(); i++)
    {
        string tmp="";
        tmp=multiply1(b,a[i]-'0');
        for(int j=0; j<i; j++) tmp+="0";
        res = add(res,tmp);
    }
    a=c;
    return res;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    string dp[101];
    dp[0]="1";
    dp[1]="1";
    for(int i=2; i<=100; i++)
    {
        dp[i]="";
        for(int j=0; j<=i/2-1; j++)
        {
            dp[i]=add(dp[i],multiply1(multiply2(dp[j],dp[i-j-1]),2));
        }
        if(i%2!=0)
            dp[i]=add(multiply2(dp[i/2],dp[i/2]),dp[i]);
    }
 //   for(int i=0; i<=100; i++) cout << dp[i]<<" ";
 //   cout << endl;
    while(t--)
    {
        int n;
        cin>>n;
        cout << dp[n];
        cout << endl;
    }
}

