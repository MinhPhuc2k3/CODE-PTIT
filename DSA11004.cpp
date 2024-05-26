//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void makeRoot(node *root, int v, char c)
{
    if(c=='L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node *root, int u, int v, char c)
{
    if(root==NULL) return;
    if(root->data==u)
    {
        makeRoot(root,v,c);
    }
    else
    {
        insertNode(root->left,u,v,c);
        insertNode(root->right,u,v,c);
    }
}

void levelorder(node *root)
{
    queue <node*> q;
    q.push(root);
    while(!q.empty())
    {
        node *tmp = q.front();
        q.pop();
        cout << tmp->data<<" ";
        if(tmp->left!=NULL) q.push(tmp->left);
        if(tmp->right!=NULL) q.push(tmp->right);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        node *root = NULL;
        int u, v; char c;
        int n; cin>>n;
        while(n--)
        {
            cin>>u>>v>>c;
            if(root==NULL)
            {
                root = new node(u);
                makeRoot(root,v,c);
            }
            else
                insertNode(root,u,v,c);
        }
        levelorder(root);
        cout<< endl;
    }
}
