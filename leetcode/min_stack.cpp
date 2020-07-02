class MinStack {
public:
    vector<pair<int,int>> vec;
    MinStack() {
        vec = {};
    }
    
    void push(int x) {
        if(empty())
            vec.push_back(make_pair(x,x));
        else
            vec.push_back(make_pair(x,min(x,getMin())));
    
    }
    
    bool empty(){
        return vec.size() == 0;
    }
    
    void pop() {
        vec.pop_back();
    }
    
    int top() {
        return vec[vec.size()-1].first;
    }
    
    int getMin() {
        return vec[vec.size()-1].second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
