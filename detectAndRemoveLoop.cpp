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

bool RemoveLoop(Node* head){
    Node* slow = head;
    Node* fast = head;
    
    do{
        slow = slow->next;
        fast = fast->next->next;
    } while(slow!=fast);
    
        fast = head;
        
        while(slow->next != fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
    slow->next = NULL;
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

//	printList(head);
	
   // makeCycle(head,3);
  // cout<< detectLoop(head)<<endl;
    
	
	if (detectLoop(head))
        cout << "Loop Found"<<endl;
    else
        cout << "No Loop";
    
    RemoveLoop(head);   
    
    if (detectLoop(head))
        cout << "Loop Found";
    else
        cout << "No Loop"<<endl;
    

    return 0;
}


