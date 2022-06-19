Output Status: 

Runtime: 53 ms, faster than 89.50% of C++ online submissions for Search Suggestions System.
Memory Usage: 29.5 MB, less than 73.39% of C++ online submissions for Search Suggestions System

// Naive Solution :: Time : O(N *(M*N))

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
     
        string curr = "";
        multiset<string> store;
        vector<string> temp;
        
        vector<vector<string>> res;
        
        for(auto c:searchWord){
            
            curr += c;
            store.clear();
            for(auto s:products){
                if(s.substr(0,curr.length()) == curr){
                    store.insert(s);
                }
            }   
            
            temp.clear();
            
            for(int i=0;i<3 && !store.empty();i++){
                
                temp.push_back(*store.begin());
                store.erase(store.begin());
                
            }
            res.push_back(temp);
        }
        return res;
    }
};

// Better Solution :: Time : O(NlogN) + O(N*(M*N))

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
     
        string curr = "";
        vector<string> v;
        vector<vector<string>> res;
        
        sort(products.begin(),products.end());
        
        for(auto c: searchWord){
            
            curr += c;
            v.clear();
            
            for(auto s: products){
                
                if(s.substr(0,curr.length()) == curr){
                    v.push_back(s);
                }
                if(v.size() == 3){
                    break;
                }
            }
            res.push_back(v);
        }
        return res;
    }
};

// Efficient Solution Using Binary Search

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
     
        string curr = "";
        vector<string> v;
        vector<vector<string>> res;
        
        sort(products.begin(),products.end());
        
        for(auto c: searchWord){
            
            curr += c;
            v.clear();
            
            auto itr = lower_bound(products.begin(),products.end(),curr);
            auto curr1 = products.begin();
            
            for(int i=0;i<3 && itr+i != products.end();i++){
                string now;
                now += *(itr+i);
                
                if(now.find(curr)){
                    break;
                }
                v.push_back(now);
                
            }
            
            res.push_back(v);
        }
        return res;
    }
};
