#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} * first;
void create(int arr[], int n)
{ // to creat a linkedlist.
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
// itrative __VERSION__
Node *search(struct Node *p, int key)
{

    while (p != NULL)
    {
        if (p->data == NULL)
        {
            return NULL;
        }
        if (p->data == key)
        {
            return p;
        }
        p = p->next;
    }
}

Node *Rsearch(struct Node *p, int key)
{
    if (p->data == key)
    {
        return (p);
    }
    Rsearch(p->next, key);
}

int main()
{
    struct Node *temp;
    struct Node *tempR;
    int A[5] = {3, 5, 7, 10, 15};
    create(A, 5);
    int key = 7;

    temp = search(first, key);

    tempR = Rsearch(first, key);
    if (temp)
        cout << temp;
    cout << endl;
    if (tempR)
        cout << tempR->data;

    return 0;
}