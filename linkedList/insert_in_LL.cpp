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

void Display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void insert_at_first(struct Node *p, int key)
{

    struct Node *t = new Node; // create a new node
    t->data = 10;
    t->next = first;
    first = t;
}

void insert_after_given_pos(struct Node *p, int key, int position)
{

    struct Node *t = new Node; // create a new node
    t->data = key;
    p = first;
    for (int i = 0; i < position - 1; i++)
    {
        p = p->next;
    }

    t->next = p->next;
    p->next = t;
}
void complete_insertion(struct Node *p, int key, int pos)
{
    Node *t = new Node;
    if (pos == 0)
    {
        t->data = key;
        t->next = first;
        first = t;
    }
    else if (pos > 0)
    {
        for (int i = 0; i < pos - 1 && (p); i++)
        {
            p = p->next;
        }

        t->data = key;
        t->next = p->next;
        p->next = t;
      }
}
int main()
{
    struct Node *temp;
    struct Node *tempR;
    int A[5] = {3, 5, 7, 10, 15};
    create(A, 5);
    int key = 4646464;

    cout << "Before insertion LinkedList was : ";
    Display(first);
    cout << endl;

    // insert_after_given_pos(first, key, 0);
    complete_insertion(first, key, 3);
    // tempR = Rsearch(first,key);

    cout << "After insertion : ";
    Display(first);

    // cout<<endl;
    // if(tempR)
    // cout<<tempR->data;

    return 0;
}