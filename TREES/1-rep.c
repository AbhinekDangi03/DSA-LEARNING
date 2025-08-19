//BASIC REPRESENTATION OF TREE IN C
#include<stdio.h>
#include<stdlib.h>

struct Node
  {
    int value; 
    struct Node* left;
    struct Node* right;
  };

struct Node* addNode(struct Node* Root, int value)
  {
    if(Root == NULL)
      {
        Root = malloc(sizeof(struct Node));
        Root->value = value;
        Root->left = NULL;
        Root->right = NULL;
        printf("root node %d created\n", value);
        return Root;
      }
      if(value < Root->value)
        {
          Root->left = addNode(Root->left, value);
          printf("Node added to the left\n");
        }
      else
      {
        Root->right = addNode(Root->right, value);
        printf("Node added to the right\n");
      } 

      return Root;
  }

int main()
  {
    struct Node* root = NULL;
    root = addNode(root, 10);
    root = addNode(root, 5);
    root = addNode(root, 15);
    return 0;
  }