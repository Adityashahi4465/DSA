#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;               // take 2-bytes of memory.
   struct Node *next;       // according to data it will consumes memory(2-bytes).
}*first;                          // lnkedlist is according to above consumes 4-bytes memory.

int main(){
// printf();

struct Node *p;
p=(struct Node*)malloc(sizeof(struct Node));   // for C++ ---> p = new Node;
p->data = 5;                //initiaizing data of node.
p->next = 0;                //giving the address to the next next node.
printf("%d",*p);
struct Node *a,*b;
// Statments in linkedlist
/* 1. */  a=b;              // a and b have same data address.
/* 2. */  b=a->next ;       // b is pointing on Next Node.
/* 3. */  a=a->next;        // a will point on next Node. **(   Very Useful Statment in Linkedlist(LL))**

// **  Statments to check a Node is not pointing to next node
    
    if(p==NULL);
    if(p==0);
    if(!p);

// **  Statments to check a Node is pointing to some node
    if(p!=NULL);
    if(p!=0);
    if(p);

// **  Statments to check a next Node is pointing to some other node or not (cheking it is a last node or not).
    if(p->next==NULL);
    if(p->next!=NULL);
    if(p->next!=0);
    if(p->next==0);
    if(p);

    


return 0;
}