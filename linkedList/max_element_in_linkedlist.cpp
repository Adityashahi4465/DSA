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

    for (i = 0; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// itrative version
int max(Node *p)
{
    int m = -32768;
    while (p)
    {
        if (p->data > m)
        {
            m = p->data;
            p->next;
        }
    }
    return m;
}

// recursive version
int Rmax(struct Node *p)
{
    // int m =  -32768;
    int x = 0;
    if (p == 0)
    {
        return INT_MIN;
    }
    else
    {
        x = Rmax(p->next);
        if (p->data < x)      // return x>p->data?x:data;    // better approch;
        {                           
            return x;
        }
        else
            return p->data;
    }
}
int main()
{

    int a[5] = {3, 4, 6, 3, 2};
    create(a, 5);
    cout << Rmax(first);
    return 0;
}