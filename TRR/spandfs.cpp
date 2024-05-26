#include <iostream>
#include <stack>
#include <queue>
#include <cstring>
#define MAX 100
using namespace std;

class Graph
{
    private:
        int n, u, g[MAX][MAX], visited[MAX];
    public:
        void input();
        void DFS(int u);
        void BFS(int u);
        void Tree();
};

void Graph::input()
{
    cin>>n>>u;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++) cin>>g[i][j];
}

void Graph::DFS(int u)
{
    memset(visited,0,sizeof(visited));
    stack<int> st;
    st.push(u);
    while(!st.empty())
    {
        int tmp = st.top();
        visited[tmp]=1;
        st.pop();
        for(int i=1; i<=n; i++)
        {
            if(!visited[i]&&g[tmp][i]) 
            {
                cout << min(tmp,i)<<" "<<max(tmp,i)<<endl;
                st.push(tmp);
                st.push(i);
                break;
            }
        }
    }
}

void Graph::BFS(int u)
{
    memset(visited,0,sizeof(visited));
    queue<int> q;
    q.push(u);
    visited[u]=1;
    while(!q.empty())
    {
        int tmp = q.front();
        q.pop();
        for(int i=1; i<=n; i++)
        {
            if(!visited[i]&&g[tmp][i])
            {
                visited[i]=1;
                cout<<min(tmp,i)<<" "<<max(tmp,i)<<endl;
                q.push(i);
            }
        }
    }
}

void Graph::Tree()
{
    cout << "DFS tree"<<endl;
    DFS(u);
    cout << "BFS tree"<<endl;
    BFS(u);
}

int main()
{
    Graph g;
    g.input();
    g.Tree();
    return 0;
}