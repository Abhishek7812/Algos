#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int data;
     Node* next = NULL;
};

 Node* midDeletion(Node* x)
{
    Node* head = x;
    Node* slow=x;
    Node* p = NULL;
    Node* fast = x;

    while(fast->next != NULL)
    {
        // cout << 'a' << endl;
            
        p = slow;
        slow = slow->next;
        fast = fast->next->next;
        // cout << head->data << endl;
    }
    // cout << head->data << endl;
    p->next = slow->next;
    // cout << head->data << endl;
    // while(x->next !=NULL)
    // {
    //      cout<<x->data<<endl;
    //      x=x->next;
    // }
    return x;
}
int main()
{
    Node* x = new Node();
    x->data =1;
    x->next = new Node();
    x->next->data = 2;

    x->next->next = new Node();
    x->next->next->data = 3;
    x->next->next->next = new Node();
    x->next->next->next->data = 4;
    x->next->next->next->next = new Node();
    x->next->next->next->next->data = 5;
    x->next->next->next->next->next = new Node();
    x->next->next->next->next->next->data = 6;
    x->next->next->next->next->next->next = new Node();
    x->next->next->next->next->next->next->data = 7;
    x->next->next->next->next->next->next->next =NULL;
    
    // while(x->next !=NULL)
    // {
    //      cout<<x->data<<endl;
    //      x=x->next;
    // }
    
    Node* R = midDeletion(x);
    
    
    while(R->next !=NULL)
    {
         cout<<R->data<<endl;
         R=R->next;
    }
    
    
}