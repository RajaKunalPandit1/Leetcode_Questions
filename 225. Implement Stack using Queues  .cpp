Output Status : 

Runtime
0 ms
Beats
100%
Memory
6.9 MB
Beats
25.78%

  class MyStack {
public:

    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
      
      int n = q.size();
      q.push(x);

      if(q.size() == 1){
        return;
      }else{
        for(int i=0;i<n;i++){
          q.push(q.front());
          q.pop();
        }
      }
    }
    
    int pop() {
      int res = q.front();
      q.pop();
      return res;
    }
    
    int top() {
        return (q.front());
    }
    
    bool empty() {
        return (q.empty());
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
