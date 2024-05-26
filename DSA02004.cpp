//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

pii x[4] = {{1,0},{0,-1},{0,1},{-1,0}};
int visited[9][9];
int a[9][9];
string c="DLRU";
int n;
int res;
void Try(int i, int j, string s)
{
    visited[i][j]=1;
    if(i>=n-1&&j>=n-1)
    {
        res++;
        cout <<s<<" ";
        return;
    }
        for(int k=0; k<4; k++)
        {
            int inew = x[k].first+i;
            int jnew = x[k].second+j;
            if(inew>=0&&inew<n&&jnew<n&&jnew>=0&&!visited[inew][jnew])
            {
                if(a[inew][jnew]==1)
                    {
                            Try(inew,jnew,s+c[k]);
                            visited[inew][jnew]=0;
                    }
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
        cin>>n;
        memset(visited,0,sizeof(visited));
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++) cin>>a[i][j];
        string s="";
        res=0;
        Try(0,0,s);
        if(!res) cout << -1;
        cout <<endl;
    }
}

