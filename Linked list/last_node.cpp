#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

void last_node(struct node *head)

{
    struct node *ptr;
    ptr = head;
    if (head == NULL)
    {
        cout << "The linked list is empty." << endl;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    cout << "The last node has data: " << ptr->data << endl;
}

// 2nd last node

void second_last_node(struct node *head)

{
    struct node *ptr;
    ptr = head;
    if (head == NULL || head->next == NULL)
    {
        cout << "The linked list does not have enough nodes." << endl;
        return;
    }
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    cout << "The second last node has data: " << ptr->data << endl;
}