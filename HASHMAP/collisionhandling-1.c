//COLLISION: when 2 or more keys points or sits in the same bucket(index)
//THIS IS THE SEPARATE CHAINING COLLISION HANDLING METHOD where if a key collide at a index it will make a linked list to that.
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

struct Entry   
    {
        int key;
        int value;
        struct Entry* next;
    };

struct Entry* arrayTable[SIZE];

unsigned int hash(int key)
    {
        return key%SIZE;
    }

void insert(int key, int value)
    {
        unsigned int index = hash(key);
        struct Entry* current = malloc(sizeof(struct Entry));
        current->key = key;
        current->value = value;
        current->next = arrayTable[index];
        arrayTable[index] = current;
    }

int search (int key)  
    {
        unsigned int index = hash(key);
        struct Entry* current = arrayTable[index];
        while(current != NULL)
            {
                if(current->key == key)
                    return current->value;
                current = current->next;
            }
        return -1;
    }

void display()
    {
        int i;
        for(int i = 0; i<SIZE; i++)
            {
                printf("bucket %d", i);
                struct Entry* current = arrayTable[i];
                while(current!=NULL)
                    {
                        printf("->%d", current->value);
                        current = current->next;
                    }
                printf("\n");
            }
    }

int main()
    {
        int i;
        for(i = 0; i<SIZE; i++)
            {
                arrayTable[i] = NULL;
            }
        insert(1,10);
        insert(2,20);
        insert(3,30);
        insert(4,40);
        insert(6,60);
        insert(7,70);
        insert(3,90);
        insert(6,180);

       printf("%d \n", search(1));
       printf("%d \n", search(2));
       printf("%d \n", search(3));
       printf("%d \n", search(4));
       printf("%d \n", search(5));
       printf("%d \n", search(6));
       printf("%d \n", search(7));
       printf("%d \n", search(8));
      

        display();
    return 0;
    }