#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[1000009], b[1000009];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
	    cin>>n;
	    
	    for(int i=1; i<=n; i++) 
	    {
	        cin>>a[i];
	        b[i]=i;
	    }
	    int cnt=0;
	    while(1)
	    {
	        cnt++;
	        int i = n-1;
	        while(i>0&&b[i]>b[i+1]) i--;
	        bool check = true;
	        for(int i=1; i<=n; i++) 
	        {
	            if(a[i]!=b[i]) check = false;
	        }
	        if(check) break;
	        int k=n;
	        while(b[k]<b[i]) k--;
	        swap(b[k],b[i]);
	        int l=i+1, r=n;
	        while(l<r)
	        {
	            swap(b[l],b[r]);
	            l++;r--;
	        }
	    }
	    cout << cnt;
		}
    return 0;
}
