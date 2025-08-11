//this is a basic program to understand hashmap.
//GOAL: to learn how hash map would work if i use key and value both as characters; NO COLLISION HANDLING.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 10

struct bucket
    {
        char* key;          //why char*? = because we want to find the first character location to find the whole character.
        char* value;
    };

struct bucket* arrayTable[SIZE];

unsigned int hash(const char* key)      //const char* why? = because we do not want to modify the char value at any cost.
    {
        unsigned int sum = 0;
        int i;
        for(i = 0; key[i] != '\0'; i++)
            {
                sum += key[i];
            }
        return sum % SIZE;
    }

void insert(const char* key, const char* value)
    {
        unsigned int index = hash(key);

        struct bucket* temp = malloc(sizeof(struct bucket));
        temp->key = strdup(key);
        temp->value = strdup(value);

        arrayTable[index] = temp;
    }

char* search(const char* key)
    {
            unsigned int index = hash(key);
            int i;
            if(arrayTable[index] != NULL && strcmp(arrayTable[index]->key, key) == 0)
                {
                    return arrayTable[index]->value;
                }
            else
                {
                    printf("open space\n");
                }
    }

int main()
    {
        insert("name", "Abhinek");
        insert("location", "Haldwani");
        insert("plant", "monstera");
        insert("pet", "dog");
        insert("race", "Indian");

        printf("%d \n", hash("name"));
        printf("%d \n", hash("plant"));
        printf("%d \n", hash("location"));
        printf("%d \n", hash("pet"));
        printf("%d \n", hash("race"));


        printf("%s \n", search("name"));
        printf("%s \n", search("location"));
        printf("%s \n", search("college"));
        printf("%s \n", search("pet"));
        printf("%s \n", search("date"));
        printf("%s \n", search("race"));

        return 0;
    }