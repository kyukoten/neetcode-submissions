class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n+1);
        dp[0] = 0;
        dp[1] = 0;
        dp[2] = min(cost[0],cost[1]);
        for (int i=3; i<n+1; i++)
        {
            dp[i] = min (dp[i-2]+cost[i-2],dp[i-1]+cost[i-1]);
            cout << dp[i] << "\n";
        }
        return dp[n];
    }
};
