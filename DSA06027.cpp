//Le Minh Phuc CN02
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
vector <string > ans;
void selection_sort(int *a, int *b)
{
    int s = 0;
    for(int *i=a; i<b-1; i++)
    {
        s++;
        for(int *j=i+1; j<b; j++)
        {
            if(*j<*i) swap(*i,*j);
        }
        string tmp= "Buoc "+to_string(s)+":";
        for(int *k=a; k<b; k++)
        {
            tmp+=" "+to_string(*k);
        }
        ans.push_back(tmp);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        ans.clear();
        int n;
        cin>>n;
        int a[n];
        for(int &x:a)  cin>>x;
        selection_sort(a,a+n);
        for(int i=ans.size()-1; i>=0; i--) cout << ans[i]<<endl;
    }
}
