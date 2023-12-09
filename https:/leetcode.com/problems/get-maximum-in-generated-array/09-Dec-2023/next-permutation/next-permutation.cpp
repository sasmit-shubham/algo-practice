    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        pair<int,int>p={-1,-1};
        for(int i=n-1; i>=0; i--){
            for(int j=i-1; j>=0; j--){
                if(nums[i]>nums[j]){
                    if(j>p.first){
                        p.first= j;
                        p.second=i;
                    }
                }
            }
        }
        if(p.first!= -1){
            swap(nums[p.first],nums[p.second]);
            sort(nums.begin()+p.first+1, nums.end());
            return;
        }
        sort(nums.begin(), nums.end());
        return;
    }