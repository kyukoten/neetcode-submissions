class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        // unordered_map<int.int>mp;
        // for (auto i:coins)
        //     mp[i]++;
        vector<int> dp(amount+1,INT_MAX-1);
        dp[0]=0;
        for (int i=1; i<amount+1; i++)
        {
            for (auto j:coins)
            {
                if (i-j>=0)
                    dp[i] = min(dp[i],dp[i-j]+1);    
            }
        }
        return dp[amount]==INT_MAX-1 ? -1:dp[amount];
    }
};
