//Le Minh Phuc CN02
#include <iostream>
#include <algorithm>
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

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
        cout << "Buoc "<<s<<":";
        for(int *k=a; k<b; k++)
        {
            cout <<" "<<*k;
        }
        cout << endl;
    }
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
    selection_sort(a,a+n);
}
