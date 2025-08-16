//Frequency Count
//Problem: Given a string, count frequency of each character and print it in order of appearance.
//Focus: unordered_map<char,int> basics, iteration.

#include <bits/stdc++.h>
using namespace std;
int main()
  {
    cout<<"enter a string"<<endl;
    string input;
    cin>>input;
    unordered_map<char, int> freqCounter;

    for(char i: input)
      {
        freqCounter[i]++;
      }

      unordered_set<char> check;
      for(char &i: input)
      {
        if(check.find(i) == check.end())
          {
            cout<<i<<"->"<<freqCounter[i]<<endl;
            check.insert(i);
          }
      }
      return 0;
  }
