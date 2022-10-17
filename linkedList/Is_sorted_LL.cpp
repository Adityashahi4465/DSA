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
bool isSorted(struct node *p)
{
    // struct node *q = NULL;
    int x = INT_MIN;
    while (p)
    {
        if(x>p->data){
             return false;
             }
            x = p->data; 
          p = p->next;
      
    }
    return true;
}
int main()
{

    int A[5] = {3, 5, 7, 9, 1};
    // struct node*p;
    // p= new node;
    // p->data =66;
    // p->next = 0;
    // while(p!=NULL){
    //     printf("%d",p->data);
    //     p=p->next;

    // }
    create(A, 5);
    printf("\n");
    display(first);
    cout<<endl;
    bool is_sorted = isSorted(first);
    cout<<is_sorted<<" : ";
     (is_sorted) ? cout<<"LinkedList is Sorted"<<endl : cout<<"LinkedList is Not Sorted"<<endl;
    return 0;
}