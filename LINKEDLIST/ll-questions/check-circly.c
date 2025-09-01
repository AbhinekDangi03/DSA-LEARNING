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
        head = newnode;
        newnode->data = data;
        newnode->next = head;
        return head;
      }
    struct node* temp = head;
    while(temp->next != head) temp = temp->next;
    struct node* newnode = malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;

    temp->next = newnode;

    return head;
  }

void display(struct node* head)
  {
    struct node* temp = head;
    do
    {
      printf("%d->", temp->data);
      temp = temp->next;
    } while (temp!=head);
    
  }

void check_circly(struct node* head)
  {
    struct node* slow = head;
    struct node* fast = head;
    while(fast && fast->next)
      {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
          {
            printf("the linked list is circly\n");
            break;
          }
      }
  }

int main()
  {
    struct node* head = NULL;
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    display(head);
    printf("\n");
    check_circly(head);
    return 0;
  }

