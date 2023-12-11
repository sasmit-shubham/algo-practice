class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      const int n = intervals.size();
      sort(intervals.begin(), intervals.end());
      int i = 1;
      int lb = intervals[0][0];
      int mx = intervals[0][1];
      vector<vector<int>>ans;
      while(i<n){
          
          if(intervals[i][0] > mx){
              ans.push_back({lb,mx});
              lb = intervals[i][0];
          }
          
          mx = max(intervals[i][1],mx);
          i++;
      }
        
      ans.push_back({lb,mx});
      
      return ans;
      
    }
};