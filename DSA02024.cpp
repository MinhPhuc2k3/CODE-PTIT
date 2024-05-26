#include <bits/stdc++.h>
using namespace std;

int n, a[22];
vector<string> ans;
int x[22];
void Try(int k, int pre)
{
    if(k>1)
    {
        string st="";
        for(int i=0; i<k; i++) st+=to_string(x[i])+" ";
    	ans.push_back(st);
    }
    for(int i=pre+1; i<n; i++)
    {
        if(pre==-1||a[i]>a[pre])
        {
            x[k]=a[i];
            Try(k+1,i);
        }
    }
}

int main()
{
 	cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    Try(0,-1);
    sort(ans.begin(), ans.end());
    for(auto s: ans) cout << s<<endl;
    return 0;
}
