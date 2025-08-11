//GOAL: TO LEARN HOW TO DO SEPARATE CHAINING FOR CHAR KEY AND VALUES.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 10

struct Node
    {
        char* key;
        char* value;
        struct Node* next;
    };

struct Node* arrayTable[SIZE];

unsigned int hash(const char* key)
    {
        unsigned int size = 0;
        int i;
        for(i = 0; key[i] != '\0'; i++)
            {
                size += key[i];
            }
        return size % SIZE;
    }

void insert(const char* key, const char* value)
    {
        unsigned int index = hash(key);

        struct Node* current = malloc(sizeof(struct Node));
        current->key = strdup(key);
        current->value = strdup(value);
        current->next = arrayTable[index];
        arrayTable[index] = current;
    }

char* search(const char* key)
    {
        unsigned int index = hash(key);
        struct Node* current = arrayTable[index];
        while(current != NULL)
            {
                if(strcmp(current->key, key) == 0)
                    return current->value;
                current = current->next;
            }
        return "open space";
    }

void display()
    {
        int i;
        for(i=0;i<SIZE;i++)
            {
                printf("bucket %d", i);
                struct Node* current = arrayTable[i];
                while(current != NULL)
                    {
                        printf("->%s", current->value);
                        current = current->next;
                    }
                printf("\n");
            }
    }

int main()
    {
        int i;
        for(i=0; i<SIZE; i++)
            {
                arrayTable[i] = NULL;
            }
        
        insert("name", "abhinek");
        insert("location", "haldwani");
        insert("race", "Indian");
        insert("home", "haldwani");
        insert("college", "gehu");
        insert("plant", "monstera");

        printf("\n");
        
        printf("%s\n",search("name") );
        printf("%s\n",search("location") );
        printf("%s\n",search("race") );
        printf("%s\n",search("home") );
        printf("%s\n", search("table"));
        printf("%s\n",search("college") );
        printf("%s\n", search("whiteboard"));
        printf("%s\n",search("plant") );

        display();

        return 0;
    }