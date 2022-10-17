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

void Display(struct Node*p){
  while(p != NULL){
    cout<<p->data<<" ";
     p = p->next;
  }
}
// itrative __VERSION__
Node *search(struct Node *p, int key)
{
  Node *q = NULL; 
  while (p)
  {
    if (p->data == key)
    {
      q->next = p->next;
      p->next = first;
      first = p;
      return p;
    }

    q = p;
    p = p->next;
  }

  return NULL;
}

// recursive __VERSION__
// Node* Rsearch(struct Node *p,int key){

// if(p==0)
//     return NULL;
// if(key ==p->data) return (p);

//     Rsearch(p->next,key);

// }
int main()
{
  struct Node *temp;
  struct Node *tempR;
  int A[5] = {3, 5, 7, 10, 15};
  create(A, 5);
  int key = 7;

  temp = search(first, key);

  // tempR = Rsearch(first,key);
  if (temp)
    cout << "Key is found at the address : " << temp << endl;
    else
        cout << "Key is not found " << endl;
 
 Display(first);
 
  // cout<<endl;
  // if(tempR)
  // cout<<tempR->data;

  return 0;
}