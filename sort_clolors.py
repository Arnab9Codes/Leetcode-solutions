/*
https://leetcode.com/problems/sort-colors/
*/

// time complexity: O(N)

class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        d={}
        id=0
        
        for i in range(len(nums)):
            if nums[i] not in d.keys():
                d[nums[i]]=1
            else:
                d[nums[i]]=d[nums[i]]+1
            
        while((0 in d.keys()) and d[0]!=0):
            nums[id]=0
            d[0]=d[0]-1
            id=id+1
            
        while((1 in d.keys()) and d[1]!=0):
            nums[id]=1
            d[1]=d[1]-1
            id=id+1
        
        while((2 in d.keys()) and d[2]!=0):
            nums[id]=2
            d[2]=d[2]-1
            id=id+1
