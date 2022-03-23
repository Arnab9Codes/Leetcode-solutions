/**
https://leetcode.com/problems/two-sum/
**/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map< int, int>map;
        unordered_map< int,  int>::iterator it;
        
         int reduction=0;
         vector<int>pos;
        
        for( int i=0;i<nums.size();i++){
            map[nums[i]]=i;
        }
        
        for( int i=0;i<nums.size();i++){
            
            reduction=target-nums[i];
            if (map.count(reduction) !=0){
                
            
                if(map[reduction]!=i){
                    pos.insert(pos.begin(),i);
                    pos.insert(pos.begin()+1,map[reduction]);
                
                    break;
                }
            }
        }
        return pos;
    }
};
