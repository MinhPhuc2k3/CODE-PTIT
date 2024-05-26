//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
int n;
set<ii> dp[100001];
bool better(set<ii> &s, ii x)
{
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        if((*it).first<x.first&&(*it).second<x.second) return true;
        else if(it->first>=x.first) break;
    }
    return false;
}

int binarysearch(ii x)
{
    int l = 0, r = n;
    while(l<r)
    {
        int m=(l+r)/2;
        if(better(dp[m],x))
        {
            l=m+1;
        }
        else r=m;
    }
    return l;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    vector<ii> a;
    for(int i=0; i<n; i++)
    {
        int x, y; cin>>x>>y;
        a.push_back({x,y});
    }

    for(int i=0; i<n; i++)
    {
        int idx = binarysearch(a[i]);
        //cout << idx;
        if(idx<n)
        {
            auto it = dp[idx].insert(a[i]).first;it++;
            while(it!=dp[idx].end())
            {
                if(a[i].first<=(*it).first&&a[i].second<(*it).second||a[i].first<=(*it).first&&a[i].second<(*it).second)
                    {dp[idx].erase(it++);}
                else it++;
            }
        }
    }
    int cnt = 0;
    while(cnt<n&&!dp[cnt].empty())
        cnt++;
    cout << cnt<<endl;
}
