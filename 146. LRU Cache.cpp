Output Status : 

Runtime
520 ms
Beats
45.23%
Memory
178.6 MB
Beats
28.59%

class LRUCache {
public:

    struct Node{

        int key,val;
        Node *next,*prev;

        Node(int k, int v){
            key = k;
            val = v;
            next = prev = NULL;
        }
    };

    Node *head = new Node(-1,-1);
    Node *tail = new Node(-1,-1);

    unordered_map<int,Node*> mp;

    int cap;

    LRUCache(int capacity) {
        
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void addNode(Node *node){

        Node *temp = head->next;
        head->next = node;
        node->prev = head;
        node->next = temp;
        temp->prev = node;

    }

    void delNode(Node *node){
        // Node *delNext = node->next;
        // Node *delPrev = node->prev;

        node->prev->next = node->next;
        node->next->prev = node->prev;

    }
    
    int get(int key) { // O(1) Operation
        
        if(mp.find(key) != mp.end()){
            
            Node *resNode = mp[key];
            int res = resNode->val;

            mp.erase(key);

            delNode(resNode);
            addNode(resNode);

            mp[key] = head->next;
            return res;
        }
        return -1;
    }
    
    void put(int key, int value) {  // O(1) Operation
        
        if(mp.find(key) != mp.end()){

            Node *existing = mp[key];
            delNode(existing);
            mp.erase(key);
        }

        if(mp.size() == cap){
            mp.erase(tail->prev->key);
            delNode(tail->prev);
        }

        addNode(new Node(key,value));
        mp[key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
