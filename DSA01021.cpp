#include<bits/stdc++.h>
using namespace std;

bool final =false;
void nextcom(int a[],int n,int k)
{
    int i=k-1;
    while(i>-1 && a[i]==n-k+i+1){
        i--;1 4 
    }
    if(i ==-1){
            final =true;
        for(int j=0;j<k;j++){
            a[j] =j+1;
        }
    }else
    {
        a[i]++;
        for(int j=i+1;j<k;j++){
            a[j]=a[j-1]+1;
        }
    }
}


int main()
{
    int t;cin>>t;
    while(t--){
        int n,k ;
        cin >>n>>k;
        int a[k];
        set<int>se;
        final = false;
        for(int i=0;i<k;i++){
            cin >>a[i];
            se.insert(a[i]);
        }
        int ans =0;
        nextcom(a,n,k);
        if(final ==false){
            for(int i=0;i<k;i++){
                if(se.count(a[i])==0) ans++;
            }
        }
        else{
            ans+=k;
        }
        cout <<ans<<endl;
    }
}
