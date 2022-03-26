/*
https://leetcode.com/problems/search-a-2d-matrix/
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row_mid=(matrix.size()-1)/2;
        int column_mid=(matrix[0].size()-1)/2;
        int rowl=0,rowr=matrix.size()-1, coll=0,colr=matrix[0].size()-1;
        
        
        while(rowl<=rowr){
            //first we will check row mid
            //then we check the colum mid
                
            if(target>matrix[row_mid][matrix[0].size()-1]){
                rowl=row_mid+1;
            }
            else if(target<matrix[row_mid][0] ){
                rowr=row_mid-1;
            }
            else{
                
                while(coll<=colr){
                    if(target==matrix[row_mid][column_mid]){
                        return true;
                    }
                    else if(target>matrix[row_mid][column_mid]){
                        coll=column_mid+1;
                    }
                    else{
                        colr=column_mid-1;
                    }
                    
                    column_mid=coll+(colr-coll)/2;
                }
                
                return false;
                
            }
            
            row_mid=rowl+(rowr-rowl)/2;
        }//while
        
        
        return false;
        
    }
};
