/*
https://leetcode.com/problems/binary-search/
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int mid=(nums.size()-1)/2;
        int left=0;
        int right=nums.size()-1;
        
        while(left<=right){
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
            
            mid=left+(right-left)/2;
        }
        
        return -1;
    }
};
