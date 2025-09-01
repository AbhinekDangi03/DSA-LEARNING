383. Ransom Note
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.


// SOLUTION

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> count;

        for(char c: magazine) 
            {
                count[c]++;
            }
        for(char c: ransomNote) 
            {
                if(count[c]> 0) count[c]--;
                else return false;
            }
             return true;
         }
    
};