//Two Sum
//Problem: Given an array and a target, return indices of two numbers that sum to target
#include<bits/stdc++.h>
using namespace std;
int main()
  {
    int array[10] = {1,2,3,4,2,1,3,6,3,2};
    int target = 10;
    unordered_map<int, int> map;

    for(int i =0 ; i<10;  i++)
      {
        int compli = target - array[i];
        if(map.find(compli) != map.end())
          {
            cout<<map[compli]<<" "<<i<<endl;
            return 0;
          }
        map[array[i]] = i;
      }

    return -1;
  }