#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> ii;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        queue<ii> q;
        q.push({n,0});
        int cnt = 0;
        map<int,int> hash;
        while(!q.empty())
        {
            ii tmp = q.front();
            hash[tmp.first]++;
            q.pop();
            if(tmp.first==1) 
            {
                cout << tmp.second<<endl;
                break;
            }
            for(int i=2; i<=sqrt(tmp.first); i++)
            {
                if(tmp.first%i==0)
                {
                    if(!hash[tmp.first/i])q.push({tmp.first/i,tmp.second+1});
                } 
            }
            if(!hash[tmp.first-1])q.push({tmp.first-1,tmp.second+1});
        }
    }
}