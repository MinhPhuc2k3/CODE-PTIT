//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

int n, k;
int a[11][11];
int visited[11]={0};
vi res;
vector<vector<int>> ans;

void Try(int cl, int s)
{
    if(cl==n&&s==0)
    {
        ans.push_back(res);
        return;
    }
    else if(s>=0&&cl<n)
    {
        for(int j=0; j<n; j++)
        {
            if(!visited[j])
            {
                visited[j]=1;
                res.push_back(j);
                Try(cl+1,s-a[cl][j]);
                visited[j]=0;
                res.pop_back();
            }
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>k;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) cin>>a[i][j];
    Try(0,k);
    cout << ans.size()<<endl;
    for(auto x:ans) {for(auto i:x) cout << i+1<<" "; cout << endl;}
}

