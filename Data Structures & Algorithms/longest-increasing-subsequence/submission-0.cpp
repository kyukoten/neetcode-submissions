class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector <int> dp(n+1,1);
        dp[0] = 0;
        dp[1] = 1;
        int l = 1;
        for (int i=1; i<n; i++)
        {
            int j=i;
            while(j)
            {
                if (nums[i] > nums[j-1])
                    dp[i+1] = max(dp[j] + 1,dp[i+1]);    
                j--;
            }
            l = max (l,dp[i+1]);
        }
        return l;
    }
};
