//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int a[9][9], visited[9][9], res=0;

bool accepted(int i, int j)
{
    int x = 1;
    while(x<i)
    {
        if(visited[i-x][j]) return false;
        if(j>x&&visited[i-x][j-x]) return false;
        if(j+x<9&&visited[i-x][j+x]) return false;
        x++;
    }
    return true;
}

void Try(int i, int point)
{
    if(i==9)
    {
        res=max(res,point);
    }
    for(int j=1; j<=8; j++)
    {
        if(accepted(i,j)){
            visited[i][j]=1;
            Try(i+1,point+a[i][j]);
            visited[i][j]=0;
        }
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
        for(int i=1; i<=8; i++)
            for(int j=1; j<=8; j++) cin>>a[i][j];
        res=0;
        memset(visited,0,sizeof(visited));
        Try(1,0);
        cout << res<<endl;
    }
}

