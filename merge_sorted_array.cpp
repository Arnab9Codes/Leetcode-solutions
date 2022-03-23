/**
https://leetcode.com/problems/merge-sorted-array/
**/

// solution is simple merging from Mergesort

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i=0;
        int j=0;
        
        vector<int>temp;
        
        int k=0;
        
        while((i<m)&&(j<n)){
            if(nums1[i]<nums2[j]){
                
                temp.insert(temp.begin()+k, nums1[i]);
                i++;
                
            }
            else{
                temp.insert(temp.begin()+k, nums2[j]);
                j++;
            }
            k++;
        }
        
        if(i<m){
            for(int l=i;l<m;l++){
                temp.insert(temp.begin()+k,nums1[l]);
                k++;
            }
        }
        else{
            for(int l=j;l<n;l++){
                temp.insert(temp.begin()+k,nums2[l]);
                k++;
            }
        }
        //improvement can be done by not using extra storage
      
        for(int l=0;l<temp.size();l++){
            nums1[l]=temp[l];
        }
    }
};
