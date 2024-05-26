#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
	node(int x){
		data = x;
		left = right = NULL;
	}
};

node *insertNode(node *root, int x){
	if(root== NULL) return new node(x);
	if(root->data < x){
		root->right = insertNode(root->right, x);
	}
	else{
		root->left = insertNode(root->left, x);
	}
	return root;
}

void inorder(node *root){
	if(root!= NULL){
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		node *r2 = NULL;
		set<int> se;
		for(int i = 0; i < n; i++){
			int u, v;
			char c;
			cin >> u >> v >> c;
			se.insert(u);
			se.insert(v);
		}
		for(int x : se){
			if(r2 == NULL){
				r2 = new node(x);
			}
			else{
				insertNode(r2, x);
			}
		}
		inorder(r2);
		cout << endl;
	}	
	return 0;
}

