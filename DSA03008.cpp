#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>a, pair<int,int> b)
{
    return a.second<b.second;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>> job;
        for(int i=0; i< n; i++)
        {
            int x;
            cin>>x;
            job.push_back({x,0});
        }
        for(int i=0; i<n; i++) cin>>job[i].second;
        sort(job.begin(),job.end(),cmp);
        int e=job[0].second, cnt=1;
        for(int i=1; i<n; i++){
            if(job[i].first>=e)
            {
                cnt++;
                e=job[i].second;
            }
        }
        cout << cnt<<endl;
    }
}
