#include<bits/stdc++.h>
using namespace std;
int main()
    {
        string textArray = "hellow";
        unordered_map<char, int> freq;

        for(char c: textArray)
            {
                freq[c]++;
            }
        
        char result = -1;
        for(char c: textArray)
            {
                if(freq[c] >= 2)
                    {
                        result = c;
                        break;
                    }
            }
        if(result != -1)
            cout<<result<<" occurs "<<endl;
        else 
            cout<<"None is repeating"<<endl;

        return 0;
    }
