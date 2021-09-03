Output Status:
Runtime: 52 ms, faster than 85.93% of C++ online submissions for Erect the Fence.
Memory Usage: 25.1 MB, less than 36.30% of C++ online submissions for Erect the Fence.


class Solution {
public:
  vector <vector<int>> MaxPerimetr(vector<vector<int>> &points){
    int h = INT_MIN,hl = INT_MAX, hr = INT_MIN, b = INT_MAX, bl = INT_MAX, br = INT_MIN;       
    multiset<pair<int,int>> vert;
    vector<vector<int>> perim;
    set<pair<int,int>> apex;
    set<int> tmpxu,tmpxd;
    
    for(auto i : points){                                       
      vert.insert({i[0],i[1]});
      if(h < i[1]) {h = i[1];tmpxu.clear();tmpxu.insert(i[0]);}
      else {if(h == i[1]) tmpxu.insert(i[0]);}
      if(b > i[1]) {b = i[1];tmpxd.clear();tmpxd.insert(i[0]);}
      else if(b == i[1]) tmpxd.insert(i[0]);
    }
    
    auto itxl = tmpxu.begin(); hl = *itxl;
    auto itxr = tmpxu.end(); itxr--; hr = *itxr;
    apex.insert({hl,h});apex.insert({hr,h});
    itxl++;
    if(tmpxu.size() > 2)
      for(;itxl != itxr;itxl++) perim.push_back({*itxl,h});      
    
    if(h == b){
      perim.push_back({hl,h});
      perim.push_back({hr,h});
      return perim;
    }
    
    itxl = tmpxd.begin();bl = *itxl;
    itxr = tmpxd.end(); itxr--; br = *itxr;
    apex.insert({bl,b});apex.insert({br,b});
    itxl++;
    if(tmpxd.size() > 2)
      for(;itxl != itxr;itxl++) perim.push_back({*itxl,b});          

    
    multiset<pair<int,int>>::iterator itl = vert.begin(); 
    int lbo = itl->second ,lup = itl->second, xl = itl->first;
    apex.insert({xl,lbo});itl++;
    
    int step = 0;
    for(;itl->first == xl; itl++,step++) perim.push_back({xl,itl->second});
    if(step)  {lup = perim[perim.size()-1][1];perim.pop_back();}         
    apex.insert({xl,lup});
    
    
    multiset<pair<int,int>>::iterator itl2 = itl;

    int dx, dy, xxx, yyy, idx;
    
    if(itl->first < hl && itl->second < h){
      dx = hl - xl, dy = h - lup, xxx = xl, yyy = lup, idx = perim.size() - 1;
      
      for(;itl->second != h;itl++)
        if(itl->second > yyy)
          if(dx*(itl->second - yyy) - dy*(itl->first - xxx) >= 0){
            xxx = itl->first, yyy = itl->second;
            dx = hl - xxx, dy = h - yyy;
            for(int j = perim.size() - 1; j > idx; j--)
              if(j - 1 > idx){
                if((perim[j][1] - perim[j-1][1])*(xxx - perim[j-1][0]) - 
                  (perim[j][0] -perim[j-1][0])*(yyy - perim[j-1][1]) < 0) perim.pop_back();
                else break;
              }else if((perim[j][1] - lup)*(xxx - xl) - 
                (perim[j][0] - xl)*(yyy - lup) < 0) perim.pop_back();
                    else break;
            perim.push_back({itl->first,itl->second});       
          }
    }  
   
    multiset<pair<int,int>>::reverse_iterator itr = vert.rbegin();
    int rbo = itr->second,  rup = itr->second, xr = itr->first;
    apex.insert({xr,rup});itr++;
    
    step = 0;
    for(;itr->first == xr; itr++,step++) perim.push_back({xr,itr->second});
    if(step)  {rbo = perim[perim.size()-1][1];perim.pop_back();}    
    apex.insert({xr,rbo});
  
    
    if(itl2->first < bl && itl2->second > b){
      dx = bl - xl, dy = b - lbo, xxx = xl, yyy = lbo, idx = perim.size() - 1;
    
      for(;itl2->second != b ;itl2++)
        if(itl2->second < yyy)
          if(dx*(itl2->second - yyy) - dy*(itl2->first - xxx) <= 0){
            xxx = itl2->first, yyy = itl2->second;
            dx = bl - xxx, dy = b - yyy;
            for(int j = perim.size() - 1; j > idx; j--)
              if(j - 1 > idx){
                if((perim[j][1] - perim[j-1][1])*(xxx - perim[j-1][0]) - 
                  (perim[j][0] -perim[j-1][0])*(yyy - perim[j-1][1]) > 0) perim.pop_back();
                else break;
              }else if((perim[j][1] - lbo)*(xxx - xl) - 
                  (perim[j][0] - xl)*(yyy - lbo) > 0) perim.pop_back();
                  else break;
            perim.push_back({itl2->first,itl2->second});       
          }
    }  
    
    multiset<pair<int,int>>::reverse_iterator itr2 = itr;
   
    if(itr->first > hr && itr->second < h){
      dx = hr - xr, dy = h - rup, xxx = xr, yyy = rup, idx = perim.size() - 1;
    
      for(;itr->second != h;itr++)
        if(itr->second > yyy)
          if(dx*(itr->second - yyy) - dy*(itr->first - xxx) <= 0){
            xxx = itr->first, yyy = itr->second;
            dx = hr - xxx, dy = h - yyy;
            for(int j = perim.size() - 1; j > idx; j--)
              if(j - 1 > idx){
                if((perim[j][1] - perim[j-1][1])*(xxx - perim[j-1][0]) - 
                  (perim[j][0] -perim[j-1][0])*(yyy - perim[j-1][1]) > 0) perim.pop_back();
                else break;
              }else if((perim[j][1] - rup)*(xxx - xr) - 
                  (perim[j][0] - xr)*(yyy - rup) > 0) perim.pop_back();
                  else break;
            perim.push_back({itr->first,itr->second});       
        }
    }

    
    if(itr2->first > br && itr2->second > b){
      dx = br - xr, dy = b - rbo, xxx = xr, yyy = rbo, idx = perim.size() - 1;
    
      for(;itr2->second != b;itr2++)
        if(itr2->second < yyy)
          if(dx*(itr2->second - yyy) - dy*(itr2->first - xxx) >= 0){
            xxx = itr2->first, yyy = itr2->second;
            dx = br - xxx, dy = b - yyy;
            for(int j = perim.size() - 1; j > idx; j--)
              if(j - 1 > idx){
                if((perim[j][1] - perim[j-1][1])*(xxx - perim[j-1][0]) - 
                  (perim[j][0] -perim[j-1][0])*(yyy - perim[j-1][1]) < 0) perim.pop_back();
                else break;
              }else if((perim[j][1] - rbo)*(xxx - xr) - 
                  (perim[j][0] - xr)*(yyy - rbo) < 0) perim.pop_back();
                else break;
            perim.push_back({itr2->first,itr2->second});       
        }
    }
    
    
    for(auto i : apex) perim.push_back({i.first,i.second});
    return perim;
  }
  
  
  vector<vector<int>> outerTrees(vector<vector<int>>& points) {
      if(points.size() < 4) return points ;
    return MaxPerimetr(points);
  }
};
