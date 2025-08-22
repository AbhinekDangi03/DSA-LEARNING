#include<stdio.h>
#include<stdlib.h>
struct tree
  {
    int data;
    struct tree* left;
    struct tree* right;
  };

struct queue
  {
    struct tree* array[100];
    int front, rear;
  };

void enque(struct queue* q, struct tree* root)
  {
    q->array[q->rear] = root;
    q->rear++;
  }

struct tree* deque(struct queue* q)
  {
    return q->array[q->front++];
  }

int isempty(struct queue* q)
  {
    return q->front == q->rear;
  }


struct tree* insert(struct tree* root, int data)
  {
    if(root == NULL)
  {
    struct tree* newNode = malloc(sizeof(struct tree));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
  }
  if(data < root->data) root->left = insert(root->left, data);
  else 
    root->right = insert(root->right , data);

  return root;
  }

void levelorder(struct tree* root)
  {
    if(root == NULL) return;

    struct queue* q = malloc(sizeof (struct queue));
    q->front = 0;
    q->rear= 0;

    enque(q, root);

    while(!isempty(q))
      {
        struct tree* current = deque(q);
        printf("%d ", current->data);

        if(current->left) enque(q, current->left);
        if(current->right) enque(q, current->right);
      }
  }

int main()
  {
    struct tree* root = malloc(sizeof(struct tree));
    root = insert(root, 100);
    root = insert(root, 200);
    root = insert(root, 300);
    root = insert(root, 400);
    root = insert(root, 500);
    levelorder(root);
    return 0;
  }