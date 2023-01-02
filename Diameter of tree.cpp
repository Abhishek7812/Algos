#include <bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
};

node* create(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}

int height(node* root){
  if(root==NULL)return 0;
  int lh=height(root->left);
  int rh=height(root->right);
  return max(lh,rh)+1;
}

int diameter(node* root)
{
    if(root == NULL){
        return 0;
    }
    
    int lh=height(root->left);
    int rh=height(root->right);
    int ld = diameter(root->left);
    int rd = diameter(root->right);
    
    
    return max(lh+rh+1,max(ld,rd));
 
}

int main()
{
  node* root=create(1);
  root->left=create(2);
  root->left->right=create(3);
  root->left->right->left=create(4);
  root->left->right->right=create(5);
  root->right=create(6);
  root->right->left=create(7);
  root->right->left->right=create(8);
  root->right->right=create(9);
  root->right->right->right=create(10);
  root->right->right->right->right=create(11);

	cout<<"Diameter of tree is"<<endl;
    cout<<diameter(root);

	return 0;
}

