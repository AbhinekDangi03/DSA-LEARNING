//Problem: Given a list of strings, group anagrams together.
//Focus: unordered_map<string, vector<string>>, hashing based on sorted string.


#include<bits/stdc++.h>
using namespace std;
#define MAX 10
int main()
  {
    string one = "silent";
    string two = "litsen";
    unordered_map<char, int> map1;
    unordered_map<char, int> map2;

    for(char x: one) 
      {
        map1[x]++;
      } 
    for(char x: two)
      {
        map2[x]++;
      }

    for (int i = 0; i<one.length(); i++)
      {
        if(map1.find(i) != map2.end())
          {
            cout<<map1[i];
          }
        cout<<"no";
      }
      return 0;
  }