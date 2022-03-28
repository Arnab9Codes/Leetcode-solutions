/*
https://leetcode.com/problems/valid-anagram/
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map<char,int>map;
        int count=0;
        
        if(s.length()!=t.length()){
            return false;
        }
        else{
            for(int i=0;i<s.length();i++){
                map[s[i]]++;
                map[t[i]]--;
            }
            for(int i=0;i<s.length();i++){
                if(map[s[i]]==0){
                    count++;
                }
            }
            
            if(count==s.size()){
                return true;
            }
            else{
                return false;
            }
        }
    }
};
