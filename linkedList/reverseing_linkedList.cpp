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

    for (int i = 1; i < n; i++){
        t= new node;
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

void reverse_elements(struct node *p){

node *q = first;

while(q){
    q = q->next;
}
while(p<=q){
    int temp = p->data;
    p->data = q->data;
    q->data = temp;

    p = p->next;
    
}
}

void delet_at_first(struct node *p){
    
}
int main()
{

    int A[5] = {3, 5, 7, 10, 15};
 
    create(A, 5);
    printf("\n");
    display(first);
    return 0;
}