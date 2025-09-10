#include<stdio.h>
int main()
 {
  int n, i;
  scanf("%d", &n);
  int array[n]; 
  for(i = 0; i<n; i++) scanf("%d", &array[i]);
  printf("\n");
   printf("Original Array\n");
  for(i = 0; i<n; i++) printf("%d ", array[i]);
  printf("\n");

  int x = 900;
  int location = 3;
  for(i = n; i>=location; i--)
   {
    array[i] = array[i-1];
   }
   array[location-1] = x;

 
 

   printf("Altered Array\n");
   for(i = 0; i<n; i++) printf("%d ", array[i]);
    

   int deleteLoc = 2;
   for(i = n; i>=deleteLoc; i--)
    {
     array[i] = array[i-1];
    }
    array[deleteLoc-1] = NULL;

    printf("\n");
   printf("2nd Altered Array\n");
   for(i = 0; i<n; i++) printf("%d ", array[i]);
    
 }