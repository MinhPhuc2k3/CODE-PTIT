#include <bits/stdc++.h>
#define INF 1e9+7
using namespace std;

int n, m;
vector<int> g[1000];
int floyd[101][101];
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        memset(g,0,sizeof(g));
        memset(floyd,0,sizeof(floyd));
        for(int i=0; i<m; i++)
        {
            int x, y;
            cin>>x>>y;
            g[x].push_back(y);
        }
        
        for(int i=1; i<=n; i++)
        {
            for(int j:g[i])
            {
                floyd[i][j] = 1;
            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++) 
            {
                if(!floyd[i][j]) floyd[i][j]=INF;
                if(i==j) floyd[i][j]=0;
            }
        }
        for(int k=1; k<=n; k++)
        {
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=n; j++)
                {
                    floyd[i][j] = min(floyd[i][k]+floyd[k][j], floyd[i][j]);
                }
            }
        }
        float res = 0;
        int cnt = 0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(i!=j&&floyd[i][j]!=INF)
                {
                    res+=floyd[i][j];
                    cnt++;
                }
            }
        }
        cout <<setprecision(2)<<fixed<< res/cnt<<endl;
    }
}