//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

set<int> lv;

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

void makeNode(node *root, int v, char c)
{
    if(c=='L') root->left = new node(v);
    else root->right = new node(v);
}

void insertNode(node* root, int u, int v, char c)
{
    if(root!=NULL)
    {
        if(root->data==u)
        {
            makeNode(root,v,c);
        }
        else
        {
            insertNode(root->left,u,v,c);
            insertNode(root->right,u,v,c);
        }
    }
}

void inorder(node*root, int cnt)
{
    if(root!=NULL)
    {
        inorder(root->left,cnt+1);
        inorder(root->right,cnt+1);
    }
    else lv.insert(cnt-1);
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
        int n;
        cin>>n;
        lv.clear();
        for(int i=0; i<n; i++)
        {
            cin>>u>>v>>c;
            if(root==NULL)
            {
                root=new node(u);
                makeNode(root,v,c);
            }
            else insertNode(root,u,v,c);
        }
        inorder(root,1);
        if(lv.size()>1) cout << 0;
        else cout << 1;
        cout<< endl;
    }
}
