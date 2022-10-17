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

void del_Duplicates(struct node *p)
{
    struct node *q = p->next;

    while (q)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete (q);
            q = p->next;
        }
    }
}

int main()
{

    int A[5] = {3, 7, 7, 7, 15};
    create(A, 5);
    printf("\n");
    display(first);
    cout << endl;
    del_Duplicates(first);
    display(first);
    return 0;
}