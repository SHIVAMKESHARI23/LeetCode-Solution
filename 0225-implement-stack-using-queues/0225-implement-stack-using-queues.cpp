class MyStack {
public:
        queue<int>qu;
        queue<int>qu2;
    MyStack() {

    }
    
    void push(int x) {
        qu2.push(x);
        while(!qu.empty()){
            qu2.push(qu.front());
            qu.pop();
        }
        swap(qu2,qu);
    }
    
    int pop() {
        if(qu.empty())return -1;
        int val=qu.front();
        qu.pop();
        return val;
    }
    
    int top() {
          if(qu.empty()) return -1;   
        
        return qu.front();
    }
    
    bool empty() {
        return qu.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */