class Solution {
public:
    int rob(vector<int>& nums) {
        vector <int> dp(nums.size());
        if (nums.size()<=1)
            return nums[0];
        dp[0] = 0;
        dp[1] = nums[1];
        for (int i=2; i<nums.size(); i++)
            dp[i] = max(dp[i-1], (nums[i]+dp[i-2]) );    
        vector <int> temp(nums.size());
        temp[0] = 0;
        temp[1] = nums[0];
        for (int i=1; i<nums.size()-1; i++)
            temp[i+1] = max(temp[i], (nums[i]+temp[i-1]) );    
        return max (dp.back() , temp.back());    
    }
};
