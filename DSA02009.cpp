//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

int n, k, cnt, s=0;
bool check;
int a[21], visited[21];
vector<int> x;
void Try(int i,int sum = 0, int pre=-1)
{
    if(cnt == k )
    {
        check=true;
        return;
    }
    if(sum<=s/k)
    {
        if(sum<s/k)
            for(int j=pre+1; j<n; j++)
            {
                if(!visited[j])
                    {
                        visited[j]=1;
                        //x.push_back(a[j]);
                        Try(i+1,sum+a[j],j);
                        visited[j]=0;
                        //x.pop_back();
                    }
            }
        else if(sum==s/k)
        {
            //for(int ha:x) cout << ha<< " ";
            //cout << endl;
            cnt++;
            x.clear();
            Try(0,0,-1);
        }
    }
    return;
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
        memset(visited,0,sizeof(visited));
        cin>>n>>k;
        s=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(s%k) cout << 0;
        else
        {
            cnt = 0;
            check=false;
            Try(0);
            //cout << cnt;
            cout << check;
        }
        cout<< endl;
    }
}
