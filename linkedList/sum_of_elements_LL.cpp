#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *first = NULL;

void create(int arr[], int n)
{ // to creat a linkedlist.
    int i;
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
// recursive ,  working
void display_recusrivly(struct node *p)
{
    if (p != NULL)
    {
        printf("\t%d", p->data);
        display_recusrivly(p->next);
    }
}
void display(struct node *p)
{
    while (p != NULL)
    {
        printf("\t %d  ", p->data);
        p = p->next;
    }
}

//  Function To find sum of all elements
int sum(struct node *p)
{
    int sum = 0;
    while (p != 0)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

// Recursive
int sum_recursive(struct node *head)
{
    if (head == 0)
        return 0;

    // int sum=0;
    return sum_recursive(head->next) + (head->data);
}

int main()
{

    struct node *p;
    int A[5] = {3, 5, 7, 10, 15}; // sum = 40
    create(A, 5);
    int sum_of_elements = sum(first);
    int sum_of_elements_recursive = sum_recursive(first);
    cout << "  Sum is : " << sum_of_elements << endl;
    cout << " Sum is Recursivly is : " << sum_of_elements_recursive << endl;
    // display(first);
    return 0;
}