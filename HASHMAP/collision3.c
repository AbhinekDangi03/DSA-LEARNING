// this is OPEN ADDRESSING WAY OF COLLISION HANDLING the hashmap.
//CORE IDEA: if the home is full find the next one that is empty.

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
#define EMPTY -1

int i;

int keyArray[SIZE];
int valueArray[SIZE];

struct Node
    {
        int key;
        int value;
    };

void init()
    {
        for(i=0;i<SIZE;i++)
            {
                keyArray[i] = EMPTY;
                valueArray[i] = EMPTY;
            }
    }

unsigned int hash(int key)
    {
        return key%SIZE;
    }

void insert(int key, int value) 
    {
        int index = hash(key);
        int comp = index;

        while(keyArray[index] != EMPTY)
            {
                index = (index+1)%SIZE;
                if(index == comp)
                    {
                        printf("TABLE IS FULL!!\n!");
                        return ;
                    }
            }
        keyArray[index] = key;
        valueArray[index] = value;
    }

int search(int key)
    {
        int index = hash(key);
        int start = index;

        while(keyArray[index] != EMPTY)
            {
                    if(keyArray[index] == key)
                        return valueArray[index];
                    index = (index+1)%SIZE;

                    if(index == start )
                        {
                            printf("FULL!!!");
                            break;
                        }
            }
        return EMPTY;
    }

int main()
    {
        init();

        insert(1, 100);
        insert(2, 200);
        insert(3, 300);
        insert(4, 400);
        insert(5, 500);
        insert(6, 600);
        insert(7, 700);

        printf("%d \n ", search(1));
        printf("%d \n ", search(2));
        printf("%d \n ", search(3));
        printf("%d \n ", search(10));
        printf("%d \n ", search(4));
        printf("%d \n ", search(5));
        printf("%d \n ", search(6));
        printf("%d \n ", search(11));
        printf("%d \n ", search(7));
        printf("%d \n ", search(8));

        return 0;
    }
