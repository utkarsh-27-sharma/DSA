class MinStack {
    vector<int> steps;
    deque<int> Q;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(Q.empty()){
            Q.push_front(val);
            steps.push_back(0);
        }else{
            if(val <= Q.front()){
                Q.push_front(val);
                steps.push_back(0);
            }else{
                Q.push_back(val);
                steps.push_back(1);
            }
        }
    }
    
    void pop() {
        if(steps.back() == 0){
            Q.pop_front();
        }else{
            Q.pop_back();
        }
        steps.pop_back();
    }
    
    int top() {
        if(steps.back() == 0)
            return Q.front();
        
        return Q.back();
    }
    
    int getMin() {
        return Q.front();
    }
};
