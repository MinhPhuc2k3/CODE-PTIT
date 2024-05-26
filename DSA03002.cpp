#include <iostream>
using namespace std;

int mi(int n)
{
    int x=1;
    int num=n;
    while(n>0){
        if(n%10==6) num-=x;
        n/=10;
        x*=10;
    }
    return num;
}

int ma(int n)
{
    int x=1;
    int num=n;
    while(n>0){
        if(n%10==5) num+=x;
        n/=10;
        x*=10;
    }
    return num;
}


int main()
{
    int a,b;
    cin>>a>>b;
    cout << mi(a)+mi(b)<<' '<<ma(a)+ma(b);
}
