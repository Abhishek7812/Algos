//Detect a loop in linked list

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


 
bool detectLoop(Node* head){
    Node* slow = head;
    Node* fast = head;
    
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(fast==slow){
            return true;
        }
    } 
    
    return false;
}

int main()
{
	struct Node* head = newNode(20);
	head->next = newNode(4);
	head->next->next = newNode(15);
	head->next->next->next = newNode(10);
//	head->next->next->next->next = newNode(5);
//	head->next->next->next->next->next = newNode(6);
        head->next->next->next->next = head;


	
	if (detectLoop(head))
        cout << "Loop Found";
    else
        cout << "No Loop";
    return 0;
}


