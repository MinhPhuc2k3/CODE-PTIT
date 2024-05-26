//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int visited[8][8];

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        memset(visited,0,sizeof(visited));
        string a, b;
        cin>>a>>b;
        int i, j, x, y;
        i = a[0]-'a';
        j = a[1]-'0'-1;
        x =b[0]-'a';
        y = b[1]-'0'-1;
        queue<pair<pii,int>> q;
        q.push({{i,j},0});
        visited[i][j]=1;
        pii w[8] = {{2,1},{2,-1},{-2,-1},{-2,1},{1,2},{1,-2},{-1,-2},{-1,2}};
        while(1)
        {
            int tmp1 = q.front().first.first;
            int tmp2 = q.front().first.second;
          //  cout << tmp1<<" " <<tmp2<<endl;
            visited[tmp1][tmp2]=1;
            int cnt = q.front().second;
            if(!q.empty())q.pop();
            if(tmp1==x&&tmp2==y) {
                cout << cnt<<endl;
                break;
            }
            for(int k=0; k<8; k++)
            {
                int in = w[k].first+tmp1;
                int jn =w[k].second+tmp2;
                if(!visited[in][jn]&&in<8&&in>-1&&jn<8&&jn>-1)
                {
                    q.push({{in,jn},cnt+1});
                }
            }
        }
    }
}
