#include<bits/stdc++.h>
using namespace std;

int main()
    {
        vector<int> array = {1,2,2,3,4,4,5,6,6};
        unordered_map<int, int> frec;

        for(int i: array)
            {
                frec[i]++;
            }

        for(auto &i: frec)
            {
                cout<<i.first << "occurs" <<i.second <<"times\n"
            }
        
        return 0;
    }