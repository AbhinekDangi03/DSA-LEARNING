#include<stdio.h>
#include<stdlib.h>
struct node
  {
    int data;
    struct node* left;
    struct node* right;
  };

struct ques
  {
    struct node* array[100];
    int front,rear;
  };

void enque(struct node* node, struct ques* q)