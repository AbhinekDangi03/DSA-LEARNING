//First Non-Repeating Character
//Problem: Return the first character in a string that doesn’t repeat. If none, return -1.
//Focus: Order awareness + map counts.

#include<bits/stdc++.h>
using namespace std;
int main()
  {
    string input = "aabbcc";
    unordered_map<char, int> count;

    for(char i: input)
      {
        count[i]++;
      }
    
    for(char i: input)
      {
        if(count[i] == 1) 
          {
            cout<<"FIRST NON-REPEATING CHARACTER = "<<i<<endl;
            return 0;
          }
      }
    cout<<"all are repeating"<<endl;
    return -1;
  }