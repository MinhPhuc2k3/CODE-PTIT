#include <bits/stdc++.h>
using namespace std;

int sum;
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

void addNode(node* root,int u, int v, char c)
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
        if(root->d == u) addNode(root,u,v,c);
        else
        {
            insertNode(root->left, u, v, c);
            insertNode(root->right, u, v, c);
        }
    }
}

void travel(node* root,char c = '0')
{
    if(root==NULL) return;
    else
    {
        if(root->left==NULL&&root->right==NULL&&c=='R')
        {
            sum+=root->d;
        }
        else
        {
            travel(root->left,'L');
            travel(root->right,'R');
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sum = 0;
        node* root = NULL;
        int n;
        cin>>n;

        while(n--)
        {
            int u, v;
            char c;
            cin>>u>>v>>c;
            if(root==NULL) {
                root = new node(u);
                addNode(root,u,v,c);
            }
            else insertNode(root,u,v,c);
        }
        travel(root);
        cout << sum<< endl;
        free(root);
    }
}