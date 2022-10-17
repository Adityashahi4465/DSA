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
/* There are 2 cases
1. Deleting 1st node
2. Delet Node at given position
*/

void delet_at_first(struct node *p)
{

    p = first;
    first = first->next;
    int x = p->data;
    delete (p); // dealocating memory from heap
}
int delete_at_given_pos(struct node *p, int pos)
{
    struct node *q = NULL;
    int x;
    if (pos == 1)
    {
        delet_at_first(p);
    }
    else
    {
        for (int i = 1; i < pos - 1 && p; i++)
        {
            p = p->next;
        }
            q = p->next;
            p->next = q->next;
            x = q->data;
            delete (q);
        
    }
    return x;
}
int main()
{

    int A[5] = {3, 5, 7, 10, 15};
    create(A, 5);
    printf(" Before Deletion\n");
    display(first);
    // delet_at_first(first);
    delete_at_given_pos(first, 5);
    cout << "\nAfter Deletion" << endl;
    display(first);
    return 0;
}