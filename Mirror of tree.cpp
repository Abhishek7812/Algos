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


void inOrder(node* root)
{
    if (root == NULL)
        return;
 
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}


void mirror(node* root){
     if (root == NULL){
        return ;
     }
    else {
        struct Node* temp;
 
        mirror(root->left);
        mirror(root->right);
 
      /*  temp = root->left;
        root->left = root->right;
        root->right = temp; */
        swap(root->left, root->right);

    }
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

	cout<<"Mirror of tree is"<<endl;
	inOrder(root);

    mirror(root);
    
    cout << "\nInorder traversal of the mirror tree"
         << " is \n";
    inOrder(root);


	return 0;
}

