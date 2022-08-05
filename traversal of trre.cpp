#include<bits/stdc++.h>
using namespace std;

class node{
    public:
       int data;
       node* left = NULL;
       node* right = NULL;
       
    /*node(int d)
    {
        data  = d;
        left = NULL;
        right = NULL;
    }*/
};

node* creation(int data)
{
    node *x = new node();
    x->data =  data;
    // x->left = NULL;
    // x->right = NULL;
    return x;
}

void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
    
}

void postorder(node* root){
    if(root==NULL)
    {
        return;
    }
    
    postorder(root->right);
    postorder(root->left);
    cout<<root->data<<endl;
    
}

void inorder(node* root){
    if(root==NULL)
    {
        return;
    }
    
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}

int main()
{
    node* root = creation(1);
    
    root->left = creation(2);
    root->left->left = creation(4);
    root->left->left->left = creation(5);
    root->right = creation(3);
    
    cout<<"Pre-order elements are"<<endl;
    preorder(root);
    
    cout<<"Post-order elements are"<<endl;
    postorder(root);
    
    cout<<"In-order elements are"<<endl;
    inorder(root);
    
    
    // return 0;
}