#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    TreeNode *lchild;
    int data;
    TreeNode *rchild;
};
class Queue
{
private:
    int front;
    int rear;
    int size;
    TreeNode **Q;

public:
    Queue()
    {
        front = rear = -1;
        size = 10;
        Q = new TreeNode *[size];
    }
    Queue(int size)
    {
        front = rear = -1;
        this->size = size;
        Q = new TreeNode *[this->size];
    }
    void enqueue(TreeNode *x);
    TreeNode *dequeue();
    void Display();
    bool isEmpty();
};
void Queue::enqueue(TreeNode *x)
{
    if ((rear + 1) % size == front)
        printf("Queue Full\n");
    else
    {
        rear = (rear + 1) % size;
        Q[rear] = x;
    }
}
TreeNode *Queue::dequeue()
{
    TreeNode *x = NULL;
    if (front == rear)
        printf("Queue is Empty\n");
    else
    {
        x = Q[front + 1];
        front = (front + 1) % size;
    }
    return x;
}

bool Queue ::isEmpty()
{
    return front == rear;
}

// Tree

class Tree
{
public:
    TreeNode *root;

    Tree(){root = NULL;}
    void Create_Tree();
    void PreOrder(TreeNode *p);
    void Postorder(TreeNode *p);
    void Inorder(TreeNode *p);
    void Levelorder(TreeNode *p);
    void Height(TreeNode *p);

};
int main()
{

    return 0;
}