#include<bits/stdc++.h>
using namespace std;

struct node
{
    int d;
    node* left;
    node* right;
    node(int u)
    {
        d = u;
        left = NULL;
        right = NULL;
    }
};

void makeNode(node *root, int v, char c)
{
    if(c=='R') root->right = new node(v);
    else root->left = new node(v);
}

void insertNode(node* root, int u, int v, char c)
{
    if(root==NULL) return;
    else
    {
        if(root->d == u) makeNode(root,v,c);
        insertNode(root->right,u,v,c);
        insertNode(root->left,u,v,c);
    }
}

void spiral(node *root)
{
    stack<node*> s1, s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty())
    {
        while(!s1.empty())
        {
            node *top = s1.top(); s1.pop();
            cout << top->d<<' ';
            if(top->right !=NULL)
                s2.push(top->right);
            if(top->left !=NULL)
                s2.push(top->left);
        }
        while(!s2.empty())
        {
            node *top = s2.top(); s2.pop();
            cout << top->d<<' ';
            if(top->left != NULL)
                s1.push(top->left);
            if(top->right != NULL)
                s1.push(top->right);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        node* root = NULL;
        int u, v; char c;
        for(int i=1; i<=n; i++)
        {
            cin >> u>> v>> c;
            if(root==NULL)
            {
                root = new node(u);
            }
            insertNode(root,u,v,c);
        }
        spiral(root);
        cout << endl;
    }
}