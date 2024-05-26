#include <bits/stdc++.h>
using namespace std;

typedef struct hcn
{
    int a[2][3];
    int step = 0;
}hcn;

void rotate(int a[][3], int b[][3], int j)
{
    a[0][j+1]=b[0][j];
    a[0][j]=b[1][j];
    a[1][j]=b[1][j+1];
    a[1][j+1]=b[0][j+1];
    if(j==0)
    {
        a[0][2] = b[0][2];
        a[1][2] = b[1][2];
    }
    else
    {
        a[0][0] = b[0][0];
        a[1][0] = b[1][0];
    }
}

bool check(hcn tmp, hcn t)
{
    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++) if(tmp.a[i][j]!=t.a[i][j]) return false;
    return true;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        hcn u, t;
        for(int i=0; i<2; i++)
            for(int j=0; j<3; j++) cin>>u.a[i][j];
        for(int i=0; i<2; i++)
            for(int j=0; j<3; j++) cin>>t.a[i][j];
        queue<hcn>q;
        u.step = 0;
        q.push(u);
        while(!q.empty())
        {
            hcn tmp = q.front();
            q.pop();
            if(check(tmp,t))
            {
                cout << tmp.step;
                break;
            }
            hcn trans;
            trans.step = tmp.step+1;

            rotate(trans.a,tmp.a,0);
            q.push(trans);

            rotate(trans.a,tmp.a,1);
            q.push(trans);
        }
        cout << endl;
    }
}