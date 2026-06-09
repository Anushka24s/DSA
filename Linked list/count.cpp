#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

int count(struct node *head)
{
    struct node *ptr;
    ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }

    return count;
}