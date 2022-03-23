/**
https://leetcode.com/problems/contains-duplicate/
**/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int,int>count;
        unordered_map<int,int>::iterator itr;
        
        for(int i=0;i<nums.size();i++){
            
            count[nums[i]]++;
            if (count[nums[i]]==2){
                return true;
            }
        }        
        
        return false;
        
    }
};
