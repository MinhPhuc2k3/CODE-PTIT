#include <bits/stdc++.h>
using namespace std;

bool check;
set<int> level;
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

void travel(node* root, int l = 0)
{
    if(root==NULL) return;
    else
    {
        if(root->left==NULL&&root->right==NULL)
            level.insert(l);
        if((root->left==NULL&&root->right!=NULL)||(root->left!=NULL&&root->right==NULL))
            check = false;
        travel(root->left,l+1);
        travel(root->right,l+1);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        level.clear();
        check = true;
        node* root = NULL;
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
        travel(root);
        if(check&&level.size()==1) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}