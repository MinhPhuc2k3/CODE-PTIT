//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

int Search(int in[],int pre[], int left, int right, int x)
{
    for(int i=left; i<=right; i++)
    {
        if(in[i]==x)
        {
            return i-1;
        }
    }
    return -1;
}

void PostOrder(int in[], int pre[], int left, int right, int n)
{
    if(left>right)  return;
    int root = Search(in,pre,left,right,pre[left]);
    if(root!=-1&&root+left>=left+1)PostOrder(in,pre,left+1,root+left,n);
    if(root!=-1&&root+left+1<=right)PostOrder(in,pre,root+left+1,right,n);
    if(left>0&&left<=n)cout << pre[left]<<" ";
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
        int n;
        cin>>n;
        int in[n+1];
        int pre[n+1];
        for(int i=1; i<=n; i++) cin>>in[i];
        for(int i=1; i<=n; i++) cin>>pre[i];
        PostOrder(in,pre,1,n,n);
        cout<< endl;
    }
}
