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

//  Function To count Number of Nodes
int count(struct node *head)
{
    int cnt = 0;
    while (head != 0)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

// Recursive 
int count_recursive(struct node *head)
{
     if(head == 0) return 0;
   
        
    return count_recursive(head->next)+1;
}

int main()
{

    struct node *p;
    int A[5] = {3, 5, 7, 10, 15};
    create(A, 5);
    int num_of_nodes = count(first);
    int num_of_nodes_recursive = count_recursive(first);
    cout << " Number of nodes is : "<<num_of_nodes << endl;
    cout << " Number of nodes Recursivly is : "<<num_of_nodes_recursive << endl;
    // display(first);
    return 0;
}