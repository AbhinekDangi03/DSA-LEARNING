//#given an string find the first non repeating character if none, return -1;
#include<bits/stdc++.h>
using namespace std;
int main()
    {
        string hello = "aabbc";
        unordered_map<char, int> freq;

        for(char x: hello)
            {
                freq[x]++;
            }

        char result = -1;
        for(char x: hello)
            {
                if(freq[x] == 1)
                    {
                        result = x;
                        break;
                    }
            }
        
        if(result != -1)
            {
                cout<<"first non repeating = "<<result<<endl;
            }
        else    
            cout<<"all are repeating "<<endl;

        return 0;
    }