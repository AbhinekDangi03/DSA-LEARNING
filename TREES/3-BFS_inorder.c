#include<stdio.h>
#include<stdlib.h>
struct node
  {
    int value;
    struct node* left;
    struct node* right;
  };

struct node* insert(struct node* root, int value)
  {
    if(root == NULL)
      {
        struct node* newNode = malloc(sizeof(struct node));
        newNode->value = value;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
      }
    if(value < root->value)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
  }

void inorderDisplay(struct node* root)
  {
    if(root == NULL)
      return;
    inorderDisplay(root->left);
    printf("%d->", root->value);
    inorderDisplay(root->right);
  }

int main()
  {
    struct node* root = NULL;
    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 1);
    root = insert(root, 3);
    root = insert(root, 6);
    root = insert(root, 5);
    root = insert(root, 7);
    root = insert(root, 8);

    inorderDisplay(root);
    return 0;
  }