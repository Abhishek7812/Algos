#include<bits/stdc++.h>
using namespace std;

class node{
    public:
       int data;
       node* left = NULL;
       node* right = NULL;
       
    
};

node* creation(int data)
{
    node *x = new node();
    x->data =  data;
    // x->left = NULL;
    // x->right = NULL;
    return x;
}

int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    else {
        return max(height(root->left), height(root->right)) +1;
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
    
    cout<<"height of nodes are"<<endl;
    cout<<height(root);
    
}