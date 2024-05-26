#include <bits/stdc++.h>
using namespace std;
char a[3]={'A','B','C'};
int n;
void solve(int n, int i, int j)
{
    if(n==1) {
        cout << a[i]<<" -> "<<a[j]<<endl;
        return;
    }
    int tmp;
    if((i==0&&j==1)||(j==0&&i==1)) tmp=2;
    else if((i==1&&j==2)||(j==1&&i==2)) tmp=0;
    else tmp=1;
    solve(n-1,i,tmp);
    solve(1,i,j);
    solve(n-1,tmp,j);
}

int main()
{
    cin>>n;
    solve(n,0,2);
}
