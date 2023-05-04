Output Status : 

Runtime
13 ms
Beats
24.81%
Memory
7.9 MB
Beats
52.67%

class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> qr, qd;
        int n = senate.length();

        for(int i = 0; i<n; i++)
            (senate[i] == 'R')?qr.push(i):qd.push(i);

        while(!qr.empty() && !qd.empty()){
            int r_id = qr.front(), d_id = qd.front();
            qr.pop(), qd.pop();
            (r_id < d_id)?qr.push(r_id + n):qd.push(d_id + n);
        }
        
        return (qr.size() > qd.size())? "Radiant" : "Dire";
    }
};
