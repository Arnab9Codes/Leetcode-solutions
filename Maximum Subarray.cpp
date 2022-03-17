/** problem link:
https://leetcode.com/problems/maximum-subarray/

**/

//solution apply's KADANE's algorithm with the consideration that
//there could be no positive integers,thus maximum subarray would be the maximim value

/** q1) why are we are comparing 0 with current_sum?
the answer is that current_sum is the addition of elements i to j when we are getting something that is less than 0,then that means subarray can not be
from i to j(where array is from i to n), so, we reset current_sum to 0. We update the best_sum after traversing every element**/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int current_sum=0;
        int best_sum=INT_MIN;//could have declared anything
        int max_=INT_MIN;// needs to be updated straight away
        
        // finding if the array contains only negavtive value
        // what=1, if all negative, else 0
        int what=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                what=1;
                break;
            }
        }
        //finding the max, we will use this if all elements are negative
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max_){
                max_=nums[i];
            }
        }
        
        if(nums.size()==1){//basically only 1 element, so that is the subarray
            return nums[0];
        }
        //applying modified Kadane's algorithm
        
        if(what==0){
            best_sum=max_;
            return best_sum;
        }
        else{
            for(int i=0;i<nums.size();i++){
                current_sum=max(0, current_sum+nums[i]);
                best_sum=max(best_sum,current_sum);
            }
        }
        
        return best_sum;
    }
};
