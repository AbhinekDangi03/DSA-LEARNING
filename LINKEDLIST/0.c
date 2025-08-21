#include<stdio.h>
#include<stdlib.h>
struct node
  {
    int data;
    struct node* next;
  };
struct node* insert(struct node* head, int value)
  {
    if(head == NULL)
      {
        struct node* newnode = malloc(sizeof(struct node));
        newnode->data = value;
        head = newnode;
        newnode->next = head;
        return newnode;
      }
    struct node* newnode = malloc(sizeof(struct node));
    struct node* look = head;
    while(look->next != head)
      {
        look = look->next;
      }
    newnode->data = value;
    look->next = newnode;
    newnode->next = head;
    return head;
  }

void displayNode(struct node* head)
  {
    if(head == NULL)
      {
        printf("NO LINKED LIST"); 
      }
    struct node* look = head;
    while(look->next != head)
      {
        printf("%d->", look->data);
        look = look->next;
      }
  }

  void checkCircular(struct node* head)
    {
      struct node* look = head->next;
      while(look!= NULL && look != head)
        {
          look = look->next;
        }
      if(look = head)
        printf("\nTHE LINKED LIST IS CICULAR\n");
      else
        printf("\nAIN'T NO WAY JOSE\n");
    }

int main()
  {
    struct node* head = NULL;
    head = insert(head, 10);
    // head = insert(head, 20);
    // head = insert(head, 30);
    // head = insert(head, 40);
    // head = insert(head, 50);

    displayNode(head);
    checkCircular(head);
    return 0;

  }