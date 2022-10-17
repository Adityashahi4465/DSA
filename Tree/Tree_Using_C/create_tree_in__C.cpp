#include <bits/stdc++.h>
using namespace std;

struct Node
{
    Node *lchild;
    int data;
    Node *rchild;
};

// Queue
struct Queue
{
    int size;
    int front;
    int rear;
    Node **Q;
};
void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (Node **)malloc(q->size * sizeof(Node *));
}
void enqueue(struct Queue *q, Node *x)
{
    if ((q->rear + 1) % q->size == q->front)
        printf("Queue is Full");
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}
Node *dequeue(struct Queue *q)
{
    Node *x = NULL;

    if (q->front == q->rear)
        printf("Queue is Empty\n");
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}
int isEmpty(Queue q)
{
    return q.front == q.rear;
}

// Creating Tree

Node *root = NULL;
void createTree()
{
    Node *p, *t;
    int x;
    Queue q;
    create(&q, 100);
    cout << "Enter root value : " << endl;
    cin >> x;
    root = (struct Node *)malloc(sizeof(struct Node)); // new Node'
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        cout << "Enter left child of " << p->data << " : " << endl;
        cin >> x;
        // For left child
        if (x != -1)
        {
            t = new Node; // (struct Node*)malloc(sizeof(struct Node))
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        // For right child
        cout << "Enter right child of " << p->data << " : " << endl;
        cin >> x;
        // For left child
        if (x != -1)
        {
            t = new Node; // (struct Node*)malloc(sizeof(struct Node))
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}

void Preorder(Node *p) // Triversal
{
    if (p)
    {
        cout << p->data << "\t";
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}
void Inorder(Node *p) // Triversal
{
    if (p)
    {
        Inorder(p->lchild);
        cout << p->data << "\t";
        Inorder(p->rchild);
    }
}
void Postorder(Node *p) // Triversal
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << "\t";
    }
}
void Levelorder(Node *root)
{
    Queue q;
    create(&q, 1000);
    cout << root->data << "\t";
    enqueue(&q, root);
    while (!isEmpty(q))
    {
        root = dequeue(&q);
        if (root->lchild)
        {
            cout << root->lchild->data << "\t";
            enqueue(&q, root->lchild);
        }
        if (root->rchild)
        {
            cout << root->rchild->data << "\t";
            enqueue(&q, root->rchild);
        }
    }
}
main()
{
    createTree();
    cout << "Preorder\n";
    Preorder(root);
    cout << "\nInorder\n";
    Inorder(root);
    cout << "\nPostorder\n";
    Postorder(root);
    cout << "\nLevelorder\n";
    Levelorder(root);

    return 0;
}