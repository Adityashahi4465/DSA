#include <bits/stdc++.h>
using namespace std;

struct node{
 int data;
 struct node*next;
}*first=NULL;


void create(int arr[] ,int n){                       //to creat a linkedlist.
int i;
struct node *t,*last;
first=(struct node *)malloc(sizeof(struct node));
first->data=arr[0];
first->next =NULL;
last =first;

for(i=1;i<n;i++){
     t = (struct node*)malloc(sizeof(struct node));
     t->data=arr[i];
     t->next=NULL;
     last->next=t;
     last =t;
    }
}
//recursive ,  working
void display_recusrivly(struct node*p){
   if(p!=NULL){
    printf("\t%d",p->data);
    display_recusrivly(p->next);

}
}
void display(struct node*p){
    while(p!=NULL){
    printf("\t %d  ",p->data);
    p=p->next;

}
}

int main(){

int A[5]={3,5,7,10,15};
// struct node*p;
// p= new node;
// p->data =66;
// p->next = 0;
// while(p!=NULL){
//     printf("%d",p->data);
//     p=p->next;

// }
create(A,5);
display_recusrivly(first);
printf("\n");
display(first);
return 0;
}