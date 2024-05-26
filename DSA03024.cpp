#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b)
{
    return a.second<b.second;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<pair<int, int>> job;
        int n;
        cin>>n;
        for(int i=0; i< n; i++){
            pair<int,int> x;
            cin>>x.first>>x.second;
            job.push_back (x);
        }
        sort(job.begin(), job.end(), cmp);
        int cnt = 1, pre=job[0].second;
        for(int i=1; i<n; i++){
            if(job[i].first>=pre){
                cnt++;
                pre=job[i].second;
            }
        }
        cout << cnt;
        cout<< endl;
    }
}
