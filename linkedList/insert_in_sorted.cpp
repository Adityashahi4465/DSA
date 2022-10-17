#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *first = NULL;

void create(int arr[], int n)
{
    struct node *t, *last;
    first = new node;
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    while (p != NULL)
    {
        printf("--> %d ", p->data);
        p = p->next;
    }
}

void insert(struct node *p, int key)
{
    struct node *q = NULL;
    node *t = new node;
    t->data = key;

    if (first == NULL) // cheaking is it the first node or not.
        first = t;
    else
    {
        while (p && p->data < key)
        {
            q = p;
            p = p->next;
        }
        t->next = p;
        q->next = t;
    }
}
int main()
{

    int A[5] = {3, 5, 7, 10, 15};
    create(A, 5);
    printf("\n Before uinserting\n");
    display(first);
    insert(first, 11);
    cout << "\nAfter inserting" << endl;
    display(first);

    return 0;
}