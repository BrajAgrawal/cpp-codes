#include <iostream>
using namespace std;

class Node
{
public:
   int data;
   Node *next;

   Node(int data)
   {
      this->data = data;
      this->next = NULL;
   }

  
};

void insert_at_tail(int data, Node *&tail)
{
   Node *temp = new Node(data);
   tail->next = temp;
   tail = temp;
}

void insert_at_head(int data, Node *&head)
{
   Node *temp = new Node(data);
   temp->next = head;
   head = temp;
}

void insert_in_middle(int data, Node *&head, Node *&tail, int position)
{

   if (position == 1)
   {
      insert_at_head(data, head);
      return;
   }

   

   Node *newhead = head;
   for (int i = 1; i < position - 1; i++)
   {
      newhead = newhead->next;
   }

   if (newhead->next == NULL)
   {
      insert_at_tail(data, tail);
      return;
   }
   Node *middle = new Node(data);
   middle->next = newhead->next;
   newhead->next = middle;
}

void delete_node(int position, Node *&head,Node *&tail)
{
   if (position == 1)
   {
      Node *temp = head;
      head = head->next;
      temp->next = NULL;
      delete temp;
   }

   else
   {
      Node *prev= NULL;
      Node *curr = head;
      for(int i=1;i<position;i++)
      {
         prev = curr;
         curr = curr->next;
      }
      if(curr->next == NULL) tail =prev;
      prev->next = curr->next;
      curr->next = NULL;
      delete curr;

   }
}

void print_linked_list(Node *head)
{
   while (head != NULL)
   {
      cout << head->data << endl;
      head = head->next;
   }
   cout << endl;
}
int main()
{  
   Node *node1 = new Node(10);
   // cout<< node1->data<<endl;
   // cout<< node1->next<<endl;

   Node *head = node1;
   Node *tail = node1;

   print_linked_list(head);

   insert_at_tail(11, tail);
   print_linked_list(head);

   insert_at_head(9, head);
   print_linked_list(head);

   insert_at_head(5, head);
   print_linked_list(head);

   insert_at_tail(21, tail);
   print_linked_list(head);

   insert_in_middle(15, head, tail, 5);
   print_linked_list(head);

   insert_in_middle(23, head, tail, 7);
   print_linked_list(head);

   insert_in_middle(1, head, tail, 1);
   print_linked_list(head);

   insert_in_middle(31, head, tail, 9);
   print_linked_list(head);

   // cout<<endl;

   // cout<<head->data<<endl;
   // cout<<tail->data<<endl;

   // cout<<endl;

   delete_node(1, head,tail);
   print_linked_list(head);

   delete_node(3, head,tail);
   print_linked_list(head);

   cout<<head->data<<endl;
   cout<<tail->data<<endl;


   return 0;
}