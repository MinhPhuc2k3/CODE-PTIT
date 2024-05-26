#include <bits/stdc++.h>
using namespace std;

vector <string> ans;

void Try(int a[], int n)
{
    if(n==1){
        
        return;
    }
    string s="";
    s+="[";
    for(int i=0; i<n-1; i++)
    {
        a[i]+=a[i+1];
        if(i!=n-2)s+=to_string(a[i])+" "; else s+=to_string(a[i])+"]";
    }
    ans.push_back(s);
    Try(a,n-1);
}

int main()
{
    int TC;
    cin>>TC;
    while(TC--)
    {
        ans.clear();
        int n;
        cin>>n;
        int a[n], b[n];
        for(int i=0; i<n; i++) 
        {
        	cin>>a[i];
        	b[i]=a[i];
		}
        Try(a,n);
        for(int i=ans.size()-1; i>=0; i--) cout << ans[i]<<' ';
        cout<<"[";
        for(int i=0; i<n-1; i++) cout << b[i]<<' ';
        cout << b[n-1]<<"]"<<endl;
    }
}
