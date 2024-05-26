//Le Minh Phuc CN02
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;
vector<string> ans;
void bubble_sort(int *a, int *b)
{
    int s = 1, c=0;
    for(int *i=a; i<b-1; i++)
    {
        c=0;
        for(int *j=a; j<b-s; j++)
        {
            if(*j>*(j+1)) {
                swap(*(j+1),*j);
                c=1;
            }
        }
        if(!c) break;
        string tmp="";
        tmp+="Buoc "+to_string(s)+":";
        for(int *k=a; k<b; k++)
        {
            tmp+=" "+to_string(*k);
        }
        ans.push_back(tmp);
        s++;
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
        ans.clear();
        int n;
        cin>>n;
        int a[n];
        for(int &x:a)  cin>>x;
        bubble_sort(a,a+n);
        for(int i=ans.size()-1; i>=0; i--) cout << ans[i]<<endl;
    }

}
