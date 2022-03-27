/*
https://leetcode.com/problems/first-unique-character-in-a-string/
*/

class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char, int>map;
        unordered_map<char, int>position;
        
        for(int i=0;i<s.length();i++){
            map[s[i]]++;
        }
        
        for(int i=0;i<s.length();i++){
            if(map[s[i]]==1){
                return i;
            }
        }
        return -1;
    }
};
