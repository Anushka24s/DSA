#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *head)
{
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
        }
};