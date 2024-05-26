//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

int k, m, n;
char a[4][4];
int visited[4][4];
int  ap[101];
int cnt;
vector<string> str;
bool check ;
ii x[8] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};

void DFS(int i, int j, string s, string t)
{
   // cout << t<< endl;
    if(t==s) {
        check = true;
        return;
    }

    if(t.size()<s.size())
    for(int q=0; q<8; q++)
    {
        int in = i+x[q].first;
        int jn = j+x[q].second;
        if(!visited[in][jn]&&in>=0&&in<m&&jn>=0&&jn<n)
        {
            visited[i][j]=1;
            DFS(in,jn,s,t+a[in][jn]);
            visited[in][jn]=0;
        }
    }
    return;
}

void solve(string s)
{
    check = false;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
        {
            if(s[0]==a[i][j]) {
                memset(visited,0,sizeof(visited));
                visited[i][j]=1;
                DFS(i,j,s,string(1,s[0]));
            }
        }
    if(check) {
        cout << s<<" ";
        cnt++;
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
        memset(ap,0,sizeof(ap));
        cin>>k>>m>>n;
        str.clear();
        cnt=0;
        for(int i=0; i<k; i++)
        {
            string tmp; cin>>tmp;
            str.push_back(tmp);
        }
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++) cin>>a[i][j];
        for(int i=0; i<str.size(); i++)
        {
            solve(str[i]);
        }
        if(!cnt) cout << -1;
        cout<< endl;
    }
}
