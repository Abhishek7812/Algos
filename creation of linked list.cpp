#include<bits/stdc++.h>
using namespace std;

// struct node{
//     int data;
//     node* next;
// }

//  node* l1 = (struct node *) malloc(sizeof(struct node));
//  l1->data = 1;
//  l1->next= (struct node*) malloc(sizeof(struct node));
//  l1->next->data= 3;
//  l1->next->next=NULL;
 
//  struct node* current = l1;
//  while(current->next!=NULL)
//  {
//      cout<<current->data<<endl;
//      current=current->next; 
//  }


class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node* head = new Node();
    head->data = 1;
    head->next = new Node();
    head->next->data = 3;
    head->next->next = new Node();
    head->next->next->data = 5;
    head->next->next->next = NULL;
    Node* current = head;
    while(current != NULL) {
        cout<<current->data<<endl;
        current = current->next;
    }
    return 0;
}


     
     