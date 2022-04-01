/*
https://leetcode.com/problems/valid-parentheses/
*/

class Solution {
public:
    char match(char read){
        if(read=='('){
            return ')';
        }
        else if(read=='{'){
            return '}';
        }
        else{
            return ']';
        }
    }
    
    bool isValid(string s) {
        stack<char>st;
        //int i=0;
        
        for(int i=0;i<s.length();i++){
            if((s[i]=='(') ||(s[i]=='{')||(s[i]=='[')){
                st.push(s[i]);
            }
            // need to check if have anythin in stack to compare with
            else if ( (  !(st.empty()))&& (s[i]==match(st.top())) ){
                st.pop();
            }
            else{
                return false;
            }
        }
        
        if(st.empty()){
            return true;
        }
        else
            return false;
    }
};
