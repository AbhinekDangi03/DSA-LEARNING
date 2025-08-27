#include<stdio.h>
void hey_bubble_sort(int array[], int n)
  {
    int i,j;
    for(i = n-1; i>=1 ; i--)  //we want to go from 0 to n-1 and so one like 0 to n-1 to check each and every value in the array, and want to compart the value to the adjacent to it but for a limited period.
      {
        for(j = 0; j<=i-1; j++) //j<= i-1 : because we do not want to compart the last element, becuase it will not have any index to compare itself to anything so we want to compare to i-1 so that the second last element can compart itself to the last element and stop there itself.
          {
            if(array[j] > array[j+1])
              {
                int temp = array[j+1];
                array[j+1] = array[j];
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
    for(i = 0; i<n; i++) scanf("%d", &array[i]);

    for(i = 0; i<n; i++) printf("%d ", array[i]);

    printf("\n");

    hey_bubble_sort(array, n);
    
  }