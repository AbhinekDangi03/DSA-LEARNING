#include<stdio.h>
void selection_sort_function(int array[], int n)
    {
        int i,j;
        for(i = 0; i<n-2; i++)
            {
                int mini = i;
                for(j = i; j<=n-1; j++)
                    if(array[j] < array[mini]) mini = j;
                int temp = array[mini];
                array[mini] = array[i];
                array[i] = temp;
            }
        for(i = 0; i<n ; i++) printf("%d ", array[i]);
    }
int main()
    {
        int i, n;
        scanf("%d", &n);
        int array[n];
        for(i = 0; i<n; i++) scanf("%d", &array[i]);

        for(i = 0; i<n; i++) printf("%d ", array[i]);

        printf("\n");

        selection_sort_function(array, n);

        return 0;
    }
