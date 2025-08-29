#include<stdio.h>
#include<stdlib.h>
struct node
  {
    int data;
    struct node* next;
  };
struct node* insert(struct node* head, int data)
  {
    if(head==NULL)
      {
        struct node* newNode = malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = NULL;
        return newNode;
      }
      struct node* newNode = malloc(sizeof(struct node));
      struct node* temp = head;
      while(temp->next != NULL)
        {
          temp= temp->next;
        }
      newNode->data = data;
      newNode->next = NULL;
      temp->next = newNode;
      return head;
  }

void display(struct node* head)
  {
    struct node* temp = head;
    while(temp!=NULL)
        {
          printf("%d->", temp->data);
          temp = temp->next;
        }
  }

struct node* reverse(struct node* head)
  {
   struct node* curr = head;
   struct node* back = NULL;
   struct node* front;
    while(curr != NULL)
    {
      front = curr->next;
      curr->next = back;
      back = curr;
      curr = front;
    }
    return back;
  }
int main()
  {
    struct node* head = NULL;
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 40);
    head = insert(head, 50);
    display(head);
    printf("\n");
    head = reverse(head);
    display(head);
    return 0;
  }