//Le Minh Phuc D21CQCN02
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
const int mod=1e9+7;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

typedef struct node
{
    int data;
    node *next;
}node;

node *makeNode(int x)
{
    node *newNode = new node();
    newNode->data = x;
    newNode->next = nullptr;
    return newNode;
}

void duyet(node *head)
{
    while(head!=nullptr)
    {
        cout << head->data<<" ";
        head = head->next;
    }
}

void pushBack(node *head, int x)
{
    node *tmp = head;
    while(tmp->next!=NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = makeNode(x);
}

void Erase(node *&head, int x)
{
    node *tmp = head;
    while(head->data==x) head = head->next;
    while(tmp->next!=NULL)
    {
        while(tmp->next->data==x)
        {
            tmp->next = tmp->next->next;
        }
        tmp = tmp->next;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    node *head; head = NULL;
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        if(head==NULL) head = makeNode(x);
        else
        pushBack(head,x);
    }
    int x; cin>>x;
    Erase(head,x);
    duyet(head);
}
