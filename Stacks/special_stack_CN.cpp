#include<stack>
//a methamatical logic is implemented in order to achieve O(1) complexity
//https://www.youtube.com/watch?v=OpwYmEBcPh0&t=33s
//https://www.codingninjas.com/codestudio/problems/design-a-stack-that-supports-getmin-in-o-1-time-and-o-1-extra-space_842465?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0
class SpecialStack {
    // Define the data members.
    stack<int> st;
    int mini;
    /*----------------- Public Functions of SpecialStack -----------------*/
    public:
        
    void push(int data) {
        // Implement the push() function.
        if(st.empty()){
            st.push(data);
            mini = data;
        }
        else{
            if(data<mini){
                st.push(2*data -mini);
                mini = data;
            }
            else{
                st.push(data);
            }
        }
    }

    int pop() {
        if(st.empty()){
            return -1;
        }
        int curr = st.top();
        st.pop();
        if(curr>mini){
            return curr;
        }
        else{
            int prevMini = mini;
            int val = 2 * mini - curr;
            mini = val;
            return prevMini;
        }
    }

    int top() {
         if(st.empty()){
            return -1;
        }
        int curr = st.top();
        if(curr<mini){
            return mini;
        }
        else{
            return curr;
        }
    }

    bool isEmpty() {
        return st.empty();
    }

    int getMin() {
        if(st.empty()){
            return -1;
        }
        return mini;
    }  
};
