#include <iostream>
using namespace std;

class Node
{  public:
    Node *prev;
    Node *next;
    int data;

    Node(int data)
    {
        this->prev = NULL;
        this->next = NULL;
        this->data = data;
    }
};

void insert_at_tail(Node* &tail, int data)
{  Node * temp = new Node(data);
   tail->next = temp;
   temp->prev = tail;
   tail = temp;
}

void insert_at_head(Node* &head, int data)
{ Node* temp = new Node(data);
  temp->next= head;
  head->prev = temp;
  head = temp;

}

void insert_in_middle(Node* &head,Node* &tail ,int data,int position)
{   if(position == 1)
    {insert_at_head(head,data);
    return;}

    Node* newhead = head;
    for(int i=1;i<position-1;i++)
    {
        newhead = newhead->next;
    }

    if(newhead->next == NULL)
    {
        insert_at_tail(tail,data);
        return;
    }

    Node* temp = new Node(data);
    temp->prev = newhead;
    temp->next = newhead->next;
    newhead->next->prev = temp;
    newhead->next = temp;



}
void print_Linked_list(Node* head,Node * tail)
{
    while(head != NULL)
    { //cout<<head->prev<<"    "; 
      cout<<head->data<<"   "<<endl;
      //cout<<head->next<<endl;
      head = head->next;
    }
    cout<<endl;

    //  while(tail != NULL)
    // {
    //   cout<<tail->data<<endl;
    //   tail = tail->prev;
    // }
    // cout<<endl;


}


int main()
{
    Node* node1 = new Node(9);
    Node* head = node1;
    Node* tail = node1;

    insert_at_tail(tail,10);
    insert_at_tail(tail,15);
    insert_at_tail(tail,16);

    print_Linked_list(head,tail);

    insert_at_head(head,7);
    insert_at_head(head,5);
    insert_at_head(head,1);

    print_Linked_list(head,tail);

    insert_in_middle(head,tail,3,2);

    print_Linked_list(head,tail);




    return 0;
}