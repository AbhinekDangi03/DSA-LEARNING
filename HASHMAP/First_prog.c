#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

struct Entry    
    {
        int key;
        int value;
    };

struct Entry* arrayTable[SIZE];

unsigned int hash(int key)
    {
        return key % SIZE;
    }

void insert(int key, int value)
    {
        unsigned int index = hash(key);

        struct Entry* entry = malloc(sizeof(struct Entry));
        entry->key = key;
        entry->value = value;
        arrayTable[index] = entry;

    }
int search(int key)
    {
        unsigned int index = hash(key);
        if(arrayTable[index]!=NULL)
            return arrayTable[index]->value;
        else 
            {
                printf("open space \n");
            }
    }

int main()
    {
        insert(1, 10);
        insert(2, 20);
        insert(3, 30);
        insert(4, 40);
        insert(6, 60);
        insert(9, 90);
        insert(7, 70);

        printf("%d \n", search(1));
        printf("%d \n", search(3));
        printf("%d \n", search(4));
        printf("%d \n", search(5));
        printf("%d \n", search(9));

        return 0;


    }