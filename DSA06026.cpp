//Le Minh Phuc CN02
#include <iostream>
#include <algorithm>
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> pii;

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
        cout << "Buoc "<<s<<":";
        for(int *k=a; k<b; k++)
        {
            cout <<" "<<*k;
        }
        s++;
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
    bubble_sort(a,a+n);
}
