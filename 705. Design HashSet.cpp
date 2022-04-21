Output Status : 

Runtime: 86 ms, faster than 92.40% of C++ online submissions for Design HashSet.
Memory Usage: 43.6 MB, less than 43.81% of C++ online submissions for Design HashSet.


class MyHashSet {
public:
    
    vector<bool> table;
    
    MyHashSet() : table(1e6 + 1, false) {
        
    }
    
    void add(int key) {
        table[key] = true;
    }
    
    void remove(int key) {
        table[key] = false;
    }
    
    bool contains(int key) {
        return table[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
