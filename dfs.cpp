#include <bits/stdc++.h>
using namespace std;

int n;
int a[100][100];
int visited[100];
void DFS(int u)
{
    visited[u]=1;
    for(int i=1; i<=n; i++)
    {
        if(!visited[i]&&a[u][i])
        {
            DFS(i);
        }
    }
}

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    for(int j=1; j<=n ;j++)
    {
        cin>>a[i][j];
    }
    int tplt = 0;
    for(int i=1; i<=n; i++)
    {
        if(!visited[i]) 
        {
            DFS(i);
            tplt++;
        }
    }
int cnt = 0;
    for(int i=1; i<=n ;i++)
    {
        for(int j=i; j<=n; j++)
        {
            memset(visited,0,sizeof(visited));
            int tplt1=0;
            int x=a[i][j];
            a[i][j]=0;
            for(int i=1; i<=n; i++)
            {
                if(!visited[i]) 
                {
                    DFS(i);
                    tplt1++;
                }
            }
            if(tplt1>tplt) cnt++;
            a[i][j]=x;
        }
    }
    cout << cnt;
}