//Duplicate Detection in Array
//Problem: Given an array of integers, check if there are duplicates. Return true if any value appears more than once.
//Focus: Inserting into map, checking existence.

#include <bits/stdc++.h>
using namespace std;
#define MAX 10
int main()
  {
    int array[MAX]= {1,2,3,4,5,6,7,8,9,10};
    unordered_map<int, int> map;

    for(int i: array)
      {
        map[i]++;
      }
    bool dup = false;
    for(int i: array)
      {
        if(map[i] > 1)
          {
            cout<<"TRUE: array have dublicates"<<endl;
            dup = true;
            break;
          }
      }
      if(dup == false)
        {
          cout<<"FALSE: array does not contain dublicates"<<endl;
        }
      return 0;
  }