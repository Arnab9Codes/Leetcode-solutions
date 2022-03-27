/*
https://leetcode.com/problems/pascals-triangle/
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int>temp;
        vector<int>temp2;
        
        vector<vector<int>>pascal;
        int val=-1;
        
        if(numRows==1){
            pascal.push_back({1});
            return pascal;
        }
        else if(numRows==2){
            temp.push_back(1);
            pascal.push_back(temp);
            temp.push_back(1);
            pascal.push_back(temp);
            return pascal;
        }
        else{
            temp.push_back(1);
            pascal.push_back(temp);
            temp.push_back(1);
            pascal.push_back(temp);
            
            for(int i=2;i<numRows;i++){
                temp2.push_back(1);
                for(int j=1;j<i;j++){
                    val=temp[j-1]+temp[j];
                    temp2.push_back(val);
                }
                temp2.push_back(1);
                temp=temp2;
                pascal.push_back(temp2);
                temp2.clear();
            }
        return pascal;
    }
    }
};

