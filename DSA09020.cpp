#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(true);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int v;
    cin>>v;
    int matrix[v+1][v+1];
    memset(matrix,0,sizeof(matrix));
    string s;
    int k = 1;
    cin.ignore();
    while(k<=v)
    {
        getline(cin,s);
        stringstream ss(s);
        int n;
        while(ss>>n){
            matrix[n][k]=1;
            matrix[k][n]=1;
        }
        k++;
    }
    for(int i=1; i<=v; i++)
    {
        for(int j=1; j<=v; j++)
        cout << matrix[i][j]<<' ';
        cout << endl;
    }
}
