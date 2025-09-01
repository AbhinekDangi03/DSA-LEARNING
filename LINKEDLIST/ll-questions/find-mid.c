#include<stdio.h>
#include<stdlib.h>
struct node
  {
    int data;
    struct node* next;
  };

struct node* insert(struct node* head, int data)
  {
    if(head == NULL)
      {
        struct node* newnode = malloc(sizeof(struct node));
        newnode->data = data;
        newnode->next = NULL;
        return newnode;
      }

    struct node* temp = head;
    while(temp->next != NULL) temp = temp->next;

    struct node* newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;

    temp->next = newnode;

    return head;
  }
void display(struct node* head)
  {
    struct node* temp = head;
    while(temp!= NULL)
      {
        printf("%d->",temp->data);
        temp = temp->next;
      }
  }
void findmid(struct node* head)
  {
    struct node* slow = head;
    struct node* fast = head;
    while(fast && fast->next)
      {
        slow = slow->next;
        fast= fast->next->next;
      }
    printf("middle is: %d", slow->data);
  }

int main()
  {
    struct node* head = NULL;
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);
    head = insert(head, 6);
    head = insert(head, 7);
    display(head);
    printf("\n");
    findmid(head);
    printf("\n");
    return 0;
  }