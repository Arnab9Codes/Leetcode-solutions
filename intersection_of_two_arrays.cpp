/**
https://leetcode.com/problems/intersection-of-two-arrays-ii/submissions/
**/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int> map1;
        unordered_map<int, int>map2;
        unordered_map<int,int>::iterator it;
        
        vector<int>temp;
        //vector<int>temp2;
        
        for(int i=0;i<nums1.size();i++){
            map1[nums1[i]]+=1;
        }
        
        for(int i=0;i<nums2.size();i++){
            map2[nums2[i]]+=1;
        }
    
        
        if(nums1.size()<=nums2.size()){
            
            for(int i=0;i<nums2.size();i++){
                if((map1[nums2[i]]>0)&&(map2[nums2[i]])>0){
                    temp.push_back(nums2[i]);
                    map1[nums2[i]]--;
                    map2[nums2[i]]--;
                }
             }
        }
        else{
             for(int i=0;i<nums1.size();i++){
                if((map1[nums1[i]]>0)&&(map2[nums1[i]])>0){
                    temp.push_back(nums1[i]);
                    map1[nums1[i]]--;
                    map2[nums1[i]]--;
                }
             }
        }
        
        
        
        return temp;
        
    }
};
