#https://leetcode.com/problems/top-k-frequent-elements/

import collections

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        d={}

        for i in nums:
            if(i not in d.keys()):
                d[i]=1
            else:
                d[i]=d[i]+1
                
        d2=sorted(d.items(), key=lambda item:item[1], reverse=True)
        
        l=[item[0] for item in d2]
        
        return l[:k]
            
            
          
