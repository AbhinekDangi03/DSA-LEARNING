#include<stdio.h>
#include<stdlib.h>

struct node
  {
    int value;
    struct node* left;
    struct node* right;
  };

struct node* insert(struct node* head, int value)
  {
    if(head == NULL)
      {
        struct node* newNode = malloc(sizeof(struct node));
        newNode->value = value;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
      }
      if(head->value > value) head->left = insert(head->left, value);
      else head->right = insert(head->right, value);
      return head;
  }

void preOrderDisplay(struct node* root)
  {
    if(root == NULL)
      return;
    printf("%d->", root->value);
    preOrderDisplay(root->left);
    preOrderDisplay(root->right);
  }

int main()
  {
    struct node* head = NULL;
    head = insert(head, 4);
    head = insert(head, 2);
    head = insert(head, 1);
    head = insert(head, 3);
    head = insert(head, 5);
    head = insert(head, 7);
    head = insert(head, 6);
    head = insert(head, 8);
    preOrderDisplay(head);
    return 0;
  }