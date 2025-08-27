#include<stdio.h>
void desc_bubble_sort(int array[], int n)
  {
    int i,j;
    for(i = 0; i<n-1; i++)
      {
        for(j = n-1; j >= 1; j--)
          {
            if(array[j] > array[j-1])
              {
                int temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;
              }
          }
      }
    for(i = 0; i<n; i++) printf("%d ", array[i]);
    
  }
int main()
  {
    int i,n;
    scanf("%d", &n);
    int array[n];
    for(i = 0; i<n ; i++) scanf("%d", &array[i]);

    for(i = 0; i<n; i++) printf("%d ", array[i]);

    printf("\n");

    desc_bubble_sort(array, n);
    
  }