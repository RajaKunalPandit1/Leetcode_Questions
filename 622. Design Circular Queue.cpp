Output Status : 

Runtime: 43 ms, faster than 48.17% of C++ online submissions for Design Circular Queue.
Memory Usage: 16.8 MB, less than 82.50% of C++ online submissions for Design Circular Queue.


// Solution Using Array Modulo 

class MyCircularQueue {
public:
    MyCircularQueue(int k) {
        data.resize(k);
        maxSize = k;
    }
    
    bool enQueue(int val) {
        if (isFull()) return false;
        tail = (tail + 1) % maxSize;
        data[tail] = val;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false;
        if (head == tail) head = 0, tail = -1;
        else head = (head + 1) % maxSize;
        return true;
    }
    
    int Front() {
        return isEmpty() ? -1 : data[head];
    }
    
    int Rear() {
        return isEmpty() ? -1 : data[tail];
    }
    
    bool isEmpty() {
        return tail == -1;
    }
    
   bool isFull() {
        return !isEmpty() && (tail + 1) % maxSize == head;
    }
    
private:
    int maxSize,head=0,tail = -1;
    vector<int> data;
    
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
 
 // Another Solution Using Linked List
 
 struct Node{
    public:
        int val;
        Node *next;
        Node(int v, Node *n = nullptr){
            val = v;
            next = n;
        }
};

class MyCircularQueue {
public:
    MyCircularQueue(int k) {
        maxSize = k;      
    }
    
    bool enQueue(int value) {
        
        if(isFull()) return false;
        Node *newNode = new Node(value);
        if(isEmpty()) head = newNode, tail = newNode;
        else tail->next = newNode, tail = tail->next;
        size++;
        return true;
    }
    
    bool deQueue() {
        
        if(isEmpty()) return false;
        Node *rem = head;
        head = head->next;
        delete rem;
        size--;
        return true;
    }
    
    int Front() {
        return isEmpty() ? -1 : head->val;
    }
    
    int Rear() {
        return isEmpty() ? -1 : tail->val;
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    bool isFull() {
        return size == maxSize;
    }
private :
    int maxSize,size =0;
    Node *head = new Node(0), *tail = new Node(0);
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
