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

void skipMdeleteN(Node* head, int M , int N)
{
    Node *curr = head, *t;
    int count;
 
    while (curr)
    {
        for (count = 1; count < M && curr!= NULL; count++)
            curr = curr->next;
 
        if (curr == NULL)
            return;
 
        t = curr->next;
        for (count = 1; count<=N && t!= NULL; count++)
        {
            Node *temp = t;
            t = t->next;
            free(temp);
        }
         
        curr->next = t;
 
        curr = t;
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
	

    skipMdeleteN(head,3,2);

	printList(head);
	return 0;
}

