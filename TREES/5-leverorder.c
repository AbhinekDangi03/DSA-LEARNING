//level order mean = breadth first search 
//Algorithm: 1> create an empty queue, 2> push root into queue, 3> while the queue is not empty: pop first node>>print its value>> then push the left child (if any?)>>push right child(if any?);
#include <stdio.h>
#include <stdlib.h>
struct node
  {
    int data;
    struct node* left;
    struct node* right;
  };

struct queue
  {
    struct node* qarray[100];
    int front, back;
  };

void inenque(struct queue* q, struct node* node)
  {
    q->qarray[q->back++] = node; 
  }

struct node* deque(struct queue* q)
  {
    return q->qarray[q->front++];
  }

int isempty(struct queue* q)
  {
    return q->front == q->back;
  }

struct node* newNode(int data)
  {
    struct node* node = malloc(sizeof(struct node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
  }

void levelorder(struct node* root)
  {
    if(root == NULL) return;
    struct queue q;
    q.front = q.back = 0;
    inenque(&q, root);
    while(!isempty(&q))
      {
        struct node* current = deque(&q);
        printf("%d ",current->data);

        if(current->left) inenque(&q, current->left);
        if(current->left) inenque(&q, current->right);
      }
  }

int main()
  {
    struct node* root = newnode(1);
    root->left = newnode(2);
    root->right = newnode(3);
    root->left->left = newnode(4);
    root->left->right = newnode(5);
    root->right->left = newnode(6);
    root->right->right = newnode(7);
    
    printf("LEVEL ORDER TRAVERSAL\n");
    levelorder(root);

    return 0; 
  }

