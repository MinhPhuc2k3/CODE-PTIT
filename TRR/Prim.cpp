#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#define MAX 100
using namespace std;

 typedef struct edge
 {
     int x, y, w;
 }edge;
 
 class Graph
 {
     private:
        int n, g[MAX][MAX], start;
        vector<edge> E;
    public:
        void input();
        void Prim();
 }
 
 void Graph::input()
 {
     cin>>n>>start;
     for(int i=1;; i<=n; i++)
     {
         for(int j=1; j<=n; j++)
         {
             cin>>g[i][j];
             edge ed;
             if(i<j&&g[i][j])
             {
                 ed.x = i;
                 ed.y = j;
                 ed.w = g[i][j];
                 E.push_back(ed);
             }
         }
     }
 }
 
 void Graph::Prim()
 {
     int v[100] = {0};
     vector<pair<int,int>> MST;
     sort(E.begin(), E.end(), [](edge a, edge b)-->bool{
         if(a.w==b.w)
         {
             if(a.x==b.x) return a.y<b.y;
             else return a.x<b.x;
         }
         return a.w<b.w;
     });
     int d = 0;
     v[start] = 1;
     while(MST.size()<n-1)
     {
         int cnt = 0;
         if((v[x]==1&&v[y]==0)||(v[x]==0&&v[y]==1))
         {
             MST.push_back(p{x,y});
             v[x]=v[y]=1;
             d+=E[i].w;
             cnt++;
             break;
         }
     }
     if(!cnt) break;
     if(MST.size()==n-1)
     {
         cout << "dH = " << d<< endl;
         for(int i=0; i<MST.size(); i++)
         {
             cout << MST[i].first<<" "<<MST[i].second<<endl;
         }
     }
     else cout << "No spanning tree"<<endl;
 }
 int main()
 {
     Graph u;
     u.input();
     u.Prim();
     return 0;
 }