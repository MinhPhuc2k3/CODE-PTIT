#include<iostream>
#define MAX 100
using namespace std;
class Graph{
    private:
        int n, A[MAX][MAX], chuaxet[MAX];
    public:
        void    dataInput();
        void    varInit();
        void    vertexVisit(int u);
        void    recursiveDFS(int u);
};
void    Graph::dataInput(){
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>A[i][j];
}
void    Graph::varInit(){
    for(int i=1; i<=n; i++)
        chuaxet[i]=1;
}
void    Graph::vertexVisit(int u){
    cout<<u<<" ";
    chuaxet[u]=0;
}
void    Graph::recursiveDFS(int u){
    vertexVisit(u);
    for(int v=1; v<=n; v++)
        if((A[u][v]==1)&&(chuaxet[v]==1))
            recursiveDFS(v);
}
int main(){
    Graph   g;  g.dataInput();  g.varInit();    g.recursiveDFS(6);
}