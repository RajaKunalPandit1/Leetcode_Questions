Output Status : 

Runtime: 551 ms, faster than 5.82% of C++ online submissions for My Calendar I.
Memory Usage: 43.7 MB, less than 9.34% of C++ online submissions for My Calendar I.

// Naive Solution :: Time : O(N) :: Aux_Space : O(N)

class MyCalendar {
    private: 
    map<int,int> mp;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
        mp[start]++;
        mp[end]--;
        
        int sum = 0;
        
        for(auto it = mp.begin();it!=mp.end();it++){
            
            sum += it->second;
            
            if(sum > 1){
                mp[start]--;
                mp[end]++;
                return false;
            }
        }
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
 
 // Efficient Solution :: Time : O(logN) :: Aux_Space : O(N)

class MyCalendar {
    private:
    set<pair<int,int>> bookings;
public:
    MyCalendar() {
        
    }
    
    bool book(int s1, int e1) {
        auto slot = bookings.lower_bound({s1, e1});
        if( slot != end(bookings)   && !(slot -> first >= e1) ||      // a booked slot with nearest starting after s1 should also have its end after e1  => similar to case-1 
            slot != begin(bookings) && !(prev(slot) -> second <= s1)) // a booked slot with nearest starting before s1 should also end before s1  => similar to case-2
			    return false;         // if neither of above conditions satisfy, there exists a intersection
        bookings.insert({s1, e1});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
