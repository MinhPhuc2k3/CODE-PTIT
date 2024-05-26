#include <bits/stdc++.h>
using namespace std;

struct node
{
    int d;
    node* left;
    node* right;
    node(int u)
    {
        d=u;
        left = NULL;
        right = NULL;
    }
};

void addNode(node* root, int v, char c)
{
    if(c=='L')
        root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c)
{
    if(root==NULL) return;
    else 
    {
        if(root->d == u) addNode(root,v,c);
        insertNode(root->left, u, v, c);
        insertNode(root->right, u, v, c);
    }
}

bool check(node* root1, node* root2)
{
    queue<node*> q1;
    q1.push(root1);
    queue<node*> q2;
    q2.push(root2);
    while(!q1.empty()&&!q2.empty())
    {
        node* tmp1 = q1.front();
        node* tmp2 = q2.front();
        q1.pop(); q2.pop();
        if(tmp1->d!=tmp2->d) return false;
        if(tmp1->left!=NULL)
            q1.push(tmp1->left);
        if(tmp1->right!=NULL)
            q1.push(tmp1->right);
        if(tmp2->left!=NULL)
            q2.push(tmp2->left);
        if(tmp2->right!=NULL)
            q2.push(tmp2->right);
    }
    return true;
}

void input(node*& root)
{
    root = NULL;
    int n;
    cin>>n;
    while(n--)
    {
        int u, v;
        char c;
        cin>>u>>v>>c;
        if(root==NULL) root = new node(u);
        insertNode(root,u,v,c);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        node* root1;
        node* root2;
        input(root1);
        input(root2);
        cout << check(root1,root2)<<endl;
    }
}