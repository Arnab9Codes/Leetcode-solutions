/*
https://leetcode.com/problems/implement-queue-using-stacks/
*/
//using 2 stacks to implement a queue

class MyQueue {
public:
    stack<int>stk;
    stack<int>q;
    
    MyQueue() {
    }
    
    void push(int x) {
        int y=0;
        
        while(!q.empty()){
            y=q.top();
            stk.push(y);
            q.pop();
        }
        stk.push(x);
    }
    
    int pop(){
        int x=0;
        int y=0;
        //before any pop we are putting all stack 1 components in stack2
        while(!(stk.empty())){
            y=stk.top();
            q.push(y); 
            stk.pop();
        }
        if(!q.empty())
            x=q.top();
        q.pop();
        return x;
    }
    
    int peek() {
        int x=0; int y=0;
        if(!q.empty())
            x=q.top();
        else{
            //else condition is for if we even constructed a queue from stack2 before 
            //peeking or popping from queue
            while(!stk.empty()){
                y=stk.top();
                q.push(y);
                stk.pop();
            }
            x=q.top();
        }
        return x;
    }
    
    bool empty() {
        if((q.empty())&&(stk.empty())){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
