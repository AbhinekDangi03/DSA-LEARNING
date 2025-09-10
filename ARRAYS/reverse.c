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

  int first= 0;
  int last = n-1;


  while(first < last)
   {
     int temp = array[first];
     array[first] = array[last];
     array[last] = temp;

     first++;
     last--;
   } 

   printf("Reversed Array\n");
   for(i = 0; i<n; i++) printf("%d ", array[i]);
    
 }