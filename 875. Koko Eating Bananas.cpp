Output Status : 

Runtime
49 ms
Beats
67.31%
Memory
18.8 MB
Beats
82.50%

class Solution {
public:
    long int findHoursTaken(vector<int>& piles, int speed){
        long int hrs =0;
        for(auto cnt: piles)
            hrs+= (long)(cnt+ (speed-1))/speed;
        
        return hrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n= piles.size();
        
        // with lowspeed, we will take time = total no of bananas
        // with highspeed, we will take time = total count of piles
        int lowspeed=1 , highspeed=* max_element(begin(piles), end(piles)) ;
        int ans=-1;
        
        while( lowspeed <= highspeed){
            int midspeed = lowspeed + (highspeed - lowspeed)/2;
            
            // get the time taken to eat bananas with midspeed
            // midspeed = no of bananas eaten per hour
            long hrs_taken = findHoursTaken(piles, midspeed);
            
            // if time taken(in hrs) to eat is well within the threshold('h' hrs)
            // it could be becoz koko took a high value for "midspeed"
            // so store the probable answer , and lower the eating speed
            // becoz thats what koko wants( maybe we want \U0001f602, and he wants to eat
            // slowly. we humans are fucking creatures, not evening letting a monkey
            // have his food peacefully \U0001f622)
            if( hrs_taken <= h){
                ans = midspeed;
                highspeed = midspeed - 1;
            }
            
            // if koko cant eat all the bananas with "midspeed", koko needs to
            // increase his eating speed
            else
                lowspeed = midspeed +1;
        }
        
        return ans;
    }
};
