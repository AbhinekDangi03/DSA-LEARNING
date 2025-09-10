#include<stdio.h>
int main()
 {
   int i,j,n;
   scanf("%d", &n);
   int array[n];
   for(i = 0; i<n; i++) scanf("%d", &array[i]);

   int second, large;
   if(array[0] > array[1] )
    {
      large = array[0];
      second = array[1];
    }
   else 
    {
     second = array[0];
     large = array[1];
    }

   for(i = 2; i<n; i++)
    {
     if(array[i] > large)
      {
        second = large;
        large = array[i];
      }
      else if(array[i] > second && array[i] != large )
       {
        second = array[i];
       }
    }

    if(large == second ) printf("NO SECOND LARGEST");
    else printf("%d IS THE SECOND LARGEST ELEMENT IN THE ARRAY", second);

    return 0;
 }