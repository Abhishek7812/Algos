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

int leafCount(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else if(root->left==NULL and root->right==NULL)
    {
        return 1;
    }
    else {
        return leafCount(root->left) + leafCount(root->right);
    }
    
    
}

int main()
{
    node* root = creation(1);
    
    root->left = creation(2);
    root->left->left = creation(4);
    root->left->left->left = creation(5);
    root->right = creation(3);
    root->right->left= creation(7);
    
    cout<<"Leaf nodes are"<<endl;
    cout<<leafCount(root);
    
}