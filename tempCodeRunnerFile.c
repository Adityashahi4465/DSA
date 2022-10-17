#include<stdio.h>

struct Node
{
    int data;                  // take 2-bytes
   struct Node *next;      // according to data it will consumes memory(2-bytes)
};                          // lnkedlist is according to above consi,es 4-bytes memory

int main(){
// printf();

struct Node *p;
p=(struct Node*)malloc(sizeof(struct Node));   // for C++ --> p= new Node;

printf("%d",*p);
return 0;
}