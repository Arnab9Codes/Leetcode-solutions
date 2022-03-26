/*
https://leetcode.com/problems/valid-sudoku/
*/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<char,int>map;
        unordered_map<char,int>map1;
        unordered_map<char,int>map2;
        unordered_map<char,int>map3;
        
        bool ret=true;
        //checking the rows
        for(int i=0;i<board.size();i++){

            for(int j=0;j<board[i].size();j++){
                if((board[i][j]!='.')){
                    //val=board[i][j]-1;
                    //arr[i][index]=arr[i][index]+1;
                    map[board[i][j]]++;

                    if(map[board[i][j]]>1){
                        ret= false;
                        return ret;
                    }
                }
            }
            map.clear();
        }
        map.clear();
        
        //checking the columns
        for(int i=0;i<board.size();i++){

            for(int j=0;j<board[i].size();j++){
                if(board[j][i]!='.'){
                    map[board[j][i]]++;
                }
                if(map[board[j][i]]>1){
                        ret= false;
                    return ret;
                }
            }
            map.clear();

        }

        map.clear();
        
        //checking each of the 9 inner boxes
        
        for(int i=0;i<3;i=i+1){
            for(int j=0;j<3;j++){
                if((board[i][j]!='.')){
                    map1[board[i][j]]++;
                }
                if(map1[board[i][j]]>1){
                    ret= false;
                    return ret;
                }
            }
            //map.clear();
            for(int j=3;j<6;j++){
                if((board[i][j]!='.')){
                    map2[board[i][j]]++;
                }
                if(map2[board[i][j]]>1){
                        ret= false;
                    return ret;
                    }
            }
            //map.clear();
            for(int j=6;j<9;j++){
                if((board[i][j]!='.')){
                    map3[board[i][j]]++;
                }
                if(map3[board[i][j]]>1){
                    ret= false;
                    return ret;
                }
            }
        }
        map1.clear(); map2.clear();map3.clear();
        
        for(int i=3;i<6;i=i+1){
            for(int j=0;j<3;j++){
                if((board[i][j]!='.')){
                    map1[board[i][j]]++;
                }
                if(map1[board[i][j]]>1){
                    ret= false;
                    return ret;
                }
            }
            //map.clear();
            for(int j=3;j<6;j++){
                if((board[i][j]!='.')){
                    map2[board[i][j]]++;
                }
                if(map2[board[i][j]]>1){
                    ret= false;
                    return ret;
                    }
            }
            //map.clear();
            for(int j=6;j<9;j++){
                if((board[i][j]!='.')){
                    map3[board[i][j]]++;
                }
                if(map3[board[i][j]]>1){
                    ret= false;
                    return ret;
                    }
            }
        }
        map1.clear();map2.clear();map3.clear();
        
        for(int i=6;i<9;i=i+1){
            for(int j=0;j<3;j++){
                if((board[i][j]!='.')){
                    map1[board[i][j]]++;
                }
                if(map1[board[i][j]]>1){
                    ret= false;
                    return ret;
                    }
            }
            //map.clear();
            for(int j=3;j<6;j++){
                if((board[i][j]!='.')){
                    map2[board[i][j]]++;
                }
                if(map2[board[i][j]]>1){
                    ret= false;
                    return ret;
                    }
            }
            //map.clear();
            for(int j=6;j<9;j++){
                if((board[i][j]!='.')){
                    map3[board[i][j]]++;
                }
                if(map3[board[i][j]]>1){
                    ret= false;
                    return ret;
                    }
            }
        }

        return ret;
    }
};
