#include<iostream>
using namespace std;

void sort(int array[], int n)
    {
        for(int i = 0; i<n-2; i++)
            {
                int mini = i;
                for(int j = i; j <= n-1; j++)
                    {
                        if(array[j] < array[mini]) mini = j;
                    }
                int temp = array[mini];
                array[mini] = array[i];
                array[i] = temp; 
            }

         for(int i =0; i<n; i++) cout<<array[i]<< "->";
        
    }
int main()
    {
         int n;
         cin>>n;
         int array[n];
         for(int i =0; i<n; i++) cin>>array[i];

         for(int i =0; i<n; i++) cout<<array[i]<<"->";
         
         cout<<endl;

         sort(array, n);

         return 0;

    }