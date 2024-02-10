#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void print_ll(Node *tail)
{
    Node *curr = tail;
    do
    {

        cout << curr->data << "  ";
        curr = curr->next;

    } while (curr != tail);

    cout << endl;
}

void insert_after(Node *&tail, int check, int d)
{
    Node *curr = tail;
    while (curr->data != check)
    {
        curr = curr->next;
    }

    Node *temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
}

void delete_node(Node *&tail, int d)
{
    if (tail == NULL)
    {
        cout << "List is already empty" << endl;
        return;
    }

    Node *curr = tail->next;
    Node *prev = tail;
    while (curr->data != d)
    {
        prev = curr;
        curr = curr->next;
    }

    if (curr == prev) // Single Node Exist
    {
        tail = NULL;
        cout << "List is now empty" << endl;
        return;
    }

    if (curr == tail) //>2 Nodes
    {
        tail = tail->next;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}
int main()
{
    Node *Node1 = new Node(3);
    Node1->next = Node1;
    Node *tail = Node1;
    print_ll(tail);
    insert_after(tail, 3, 10);
    print_ll(tail);

    insert_after(tail, 3, 7);
    print_ll(tail);

    insert_after(tail, 7, 9);
    print_ll(tail);

    insert_after(tail, 10, 11);
    print_ll(tail);

    delete_node(tail, 9);
    print_ll(tail);

    delete_node(tail, 11);
    print_ll(tail);

    insert_after(tail, 10, 11);
    print_ll(tail);

    insert_after(tail, 3, 5);
    print_ll(tail);

    insert_after(tail, 7, 9);
    print_ll(tail);

    delete_node(tail, 3);
    print_ll(tail);

    delete_node(tail, 5);
    print_ll(tail);

    delete_node(tail, 7);
    print_ll(tail);

    delete_node(tail, 9);
    print_ll(tail);

    delete_node(tail, 10);
    print_ll(tail);

    delete_node(tail, 11);

    delete_node(tail, 11);

    return 0;
}