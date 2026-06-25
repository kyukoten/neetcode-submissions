class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int curr = 0;
        for (auto i:nums)
            curr+=i;
        // for (int i=0; i<=n; i++)
        // {
        //     if (sum-i==curr)
        //         return i;
        // }
        // return -1;
        return sum - curr;
    }
};
