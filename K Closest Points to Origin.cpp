Output Status: 

Runtime: 132 ms, faster than 92.26% of C++ online submissions for K Closest Points to Origin.
Memory Usage: 49 MB, less than 98.48% of C++ online submissions for K Closest Points to Origin.

class Solution {
    static inline int getsum(const vector<int> &v){ return v[0]*v[0]+v[1]*v[1]; }
    static inline bool comp(const vector<int> &l, const vector<int> &r) { return getsum(l)<=getsum(r); }
     
    //standard Quicksort(Lomuto) partition
    int partition(vector<vector<int>>& arr, int left, int right){
        vector<int> pivot = arr[right];
        int partitionIndex = left;
        for(int i = left; i<right; i++){
            if (comp(arr[i], pivot)) {//custom comparator for point (x, y)
                swap(arr[i],arr[partitionIndex]);
                partitionIndex++;
            }
        }
        swap(arr[partitionIndex], arr[right]);
        return partitionIndex;
    }
    void quickselect(vector<vector<int>>&v, int l, int r, int K){
        while(l<=r){
             int mid = partition(v, l, r);
             if (mid==K) return;
             if (mid<K) l = mid+1;
             else r = mid - 1;
        }
    }
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        quickselect(points, 0, points.size()-1, K);
        return vector<vector<int>>(points.begin(), points.begin() + K);
    }    
};
