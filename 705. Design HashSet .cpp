Output Status : 

Runtime
97 ms
Beats
68.22%
Memory
43.8 MB
Beats
37.87%

class MyHashSet {
public:

    vector<bool> table;

    MyHashSet() : table(1e6 + 1, false){
        
    }
    
    void add(int key) {
        table[key] = true;
    }
    
    void remove(int key) {
        table[key] = false;
    }
    
    bool contains(int key) {
        return (table[key]);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
