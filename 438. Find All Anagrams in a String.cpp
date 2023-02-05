Output Status :

Runtime
11 ms
Beats
91.91%
Memory
8.7 MB
Beats
77.40%

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        
    	
      if(m>n)
        return {};
    
    vector<int> pv(26,0), sv(26,0), res;
      
      for(int l=0;l<m;l++)
          pv[p[l]-'a']++;
      
      int i=0, j=0;
      
      while(j<n){
          sv[s[j]-'a']++;
          
      if((j-i+1)<m){            //When the current window size is smaller, just move ahead.
              j++;
          }
          
          else if((j-i+1)==m){                //On hitting the window.

              if(pv==sv)
                  res.push_back(i);

              sv[s[i]-'a']--;

              i++;
              j++;
          }
      }
      return res;
    }
};
