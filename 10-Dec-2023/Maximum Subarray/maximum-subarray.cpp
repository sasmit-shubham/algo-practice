class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = 0;
        int curr = 0;
        
        int mx_element = *max_element(nums.begin(), nums.end());
        if(mx_element<=0){
            return mx_element;
        }
        const int n = nums.size();
        for(int i=0; i<n; i++){
            if((curr + nums[i])<0){
                curr = 0;
            }else{
                curr+=nums[i];
            }
            
            maxSum = max(maxSum,curr);
        }
        return maxSum;
    }
};