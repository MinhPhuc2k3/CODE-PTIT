//Le Minh Phuc CN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int v;
    cin>>v;
    int matrix[v][v];
    vector<int> g[v+1];
    for(int i=0; i<v; i++)
        for(int j=0; j<v; j++) cin>>matrix[i][j];
    for(int i=0; i<v; i++)
    {
        for(int j=0; j<v; j++)
        {
            if(matrix[i][j]) g[i].push_back(j);
        }
    }
    for(int i=0; i<v; i++)
    {
        for(int x:g[i]) cout << x+1<<" ";
        cout << endl;
    }
}

