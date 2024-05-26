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
    char data;
    node *left;
    node *right;
};

node *makeNode(char c)
{
    node *newNode = new node;
    newNode->data = c;
    newNode->left = NULL;
    newNode-> right = NULL;
    return newNode;
}

bool insertNode(node *root, char c)
{
    if(!isalpha(root->data))
    {
        if(root->right==NULL)
        {
            root->right = makeNode(c);
            return true;
        }
        else
        {
            if(!insertNode(root->right,c))
            {
                if(root->left==NULL)
                {
                    root->left = makeNode(c);
                    return true;
                }
                return insertNode(root->left,c);
            }
            else return true;
        }
    }
    else return false;
}

void inorder(node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout << root->data;
        inorder(root->right);
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
        string s; cin>>s;
        node* root = NULL;
        reverse(all(s));
        for(int i=0; i<s.size(); i++)
        {
            if(root==NULL) root = makeNode(s[i]);
            else
            {
                insertNode(root,s[i]);
            }
        }
        inorder(root);
        cout<< endl;
    }
}
