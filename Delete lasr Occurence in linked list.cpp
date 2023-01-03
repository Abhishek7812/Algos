//Delete the last occurrence of an item from the linked list

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

struct Node* deleteLastOcc(Node* head, int x)
{
    Node* special = NULL;

    
    Node* temp = head;
    while (temp) {
        if (temp->data == x)
            special = temp;

        temp = temp->next;
    }

    if (special != NULL) {
        Node* removeNode = head;
        while(removeNode->next != special){
            removeNode = removeNode->next;
        }
        removeNode->next = special->next;
        special->next = NULL;
        delete special;
    }
    
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
	

    deleteLastOcc(head,2);

	printList(head);
	return 0;
}
