
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};


Node* newNode(int data)
{
	struct Node* temp = new Node;
	temp->data = data;
	temp->next = NULL;
	return temp;
}

void printList(Node *node)
{
    while (node!=NULL)
    {
        cout<<" "<<node->data<<endl;
        node = node->next;
    }
}

void removeDuplicates(Node* head)
{
    Node* current = head;
 
    Node* next_next;
     
    if (current == NULL)
    return;
 
    while (current->next != NULL)
    {
    if (current->data == current->next->data)
    {
        next_next = current->next->next;
        free(current->next);
        current->next = next_next;
    }
    else 
    {
        current = current->next;
    }
    }
}
 

int main()
{
	struct Node* head = newNode(1);
	head->next = newNode(2);
	head->next->next = newNode(2);
	head->next->next->next = newNode(4);
	head->next->next->next->next = newNode(5);
	head->next->next->next->next->next = newNode(5);

	cout << "Given Linked List\n";
	printList(head);

	removeDuplicates(head);

	cout << "Linked List after remove duplicates \n";
	printList(head);

	return 0;
}
