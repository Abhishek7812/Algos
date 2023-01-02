#include <bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
};

node* creation(int data)
{
	node* Node = new node();
	Node->data = data;
	Node->left = NULL;
	Node->right = NULL;

	return (Node);
}

int identical(node* a, node* b)
{
	if (a == NULL && b == NULL)
		return 1;

	if (a != NULL && b != NULL) {
		return (a->data == b->data
				&& identical(a->left, b->left)
				&& identical(a->right, b->right));
	}

	return 0;
}

int main()
{
	node* root1 = creation(1);
	node* root2 = creation(1);
	root1->left = creation(2);
	root1->right = creation(3);
	root1->left->left = creation(4);
	root1->left->right = creation(5);

	root2->left = creation(2);
	root2->right = creation(3);
	root2->left->left = creation(4);
	root2->left->right = creation(5);

	if (identical(root1, root2))
		cout << "Both trees are identical.";
	else
		cout << "Trees are not identical.";

	return 0;
}

// This code is contributed by rathbhupendra
