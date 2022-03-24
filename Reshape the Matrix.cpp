/*
https://leetcode.com/problems/reshape-the-matrix/
*/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        vector<vector<int>>arr;
        vector<int>temp;
        vector<int>row;
        
        if((mat.size()*mat[0].size())==(r*c)){
            
            for(int i=0;i<mat.size();i++){
                for(int j=0;j<mat[i].size();j++){
                temp.push_back(mat[i][j]);
                }
            }
        
            int k=0;
        
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    row.push_back(temp[k]);
                    k++;
                }
            arr.push_back(row);
            row.clear();
            
            }
            return arr;
        }
        else{
            return mat;
        }
        
    }
};


