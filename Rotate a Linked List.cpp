//Rotate a Linked List


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
        cout<<" "<<node->data;
        node = node->next;
    }
}

void rotate(Node** head, int k)
{
    Node* curr = *head;
    int count=1;
 
    while (count < k && curr != NULL) {
        curr = curr->next;
        count++;
    }
        
        if (curr == NULL){
            return;
        }
    
        Node* x = curr;
        
        while(curr->next!=NULL)
        {
            curr= curr->next;
        }
        
        curr->next = *head;
        *head = x->next;
        x->next = NULL;
        
    
}
 

int main()
{
	struct Node* head = newNode(1);
	head->next = newNode(2);
	head->next->next = newNode(7);
	head->next->next->next = newNode(5);
	head->next->next->next->next = newNode(2);
	head->next->next->next->next->next = newNode(4);

	printList(head);
	

    rotate(&head, 4);

	cout << "\nRotated Linked list \n";

	printList(head);
	return 0;
}

