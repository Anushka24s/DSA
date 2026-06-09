#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int search(int key, struct node *head)
{
    struct node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data == key)
        {
            return 1;
        }
        else
            ptr = ptr->next;
    }
    return 0;
}