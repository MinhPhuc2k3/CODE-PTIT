//Le Minh Phuc CN02
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
vector<vector<int>> res;
void insertion_sort(int a[],  int n)
{
    vector<int> ans;
    ans.push_back(a[0]);
    for(int i=1; i<n; i++)
    {
        res.push_back(ans);
        int idx = lower_bound(ans.begin(),ans.end(),a[i]) - ans.begin();
        ans.insert(ans.begin()+idx,a[i]);
    }
    res.push_back(ans);
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int &x:a)  cin>>x;
    insertion_sort(a,n);
    for(int i=res.size()-1; i>=0; i--)
    {
        cout << "Buoc "<<i<<":";
        for(auto x:res[i]) cout <<' '<<x;
        cout << endl;
    }
}
