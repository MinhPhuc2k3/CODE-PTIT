//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

int Search(int in[], int x, int n)
{
    for(int i=0; i<n; i++)
    {
        if(x==in[i]) return i;
    }
}

void printPostorder(int in[], int level[], int n)
{
    if(n<1) return;
    int idx = Search(in,level[0],n);
    int *newlevel = new int[n];
    int j = 0;
    for(int i=0; i<n; i++)
    {
        if(Search(in,level[i],n)<idx)
            {
                newlevel[j] = level[i]; j++;
            }
    }
    printPostorder(in,newlevel,j);
    j = 0;
    for(int i=0; i<n; i++)
    {
        if(Search(in,level[i],n)>idx)
            {
                newlevel[j] = level[i]; j++;
            }
    }
    printPostorder(in+idx+1,newlevel,j);
    cout << level[0]<<" ";
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
        int n; cin>>n;
        int in[n];
        int level[n];
        for(int i=0; i<n; i++) cin>>in[i];
        for(int i=0; i<n; i++) cin>>level[i];
        printPostorder(in,level,n);
        cout<< endl;
    }
}
