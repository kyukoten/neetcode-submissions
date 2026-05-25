class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        float k = target;
        int n = nums.size();
        unordered_map<int,int>mp;
        for (int i=0; i<n; i++)
        {
            if (nums[i]==(k/2))
            {
                if (mp.count(nums[i]))
                    return {mp[nums[i]],i};
                else
                    mp[nums[i]]=i;    
            }
            else
                mp[nums[i]]=i;
        }
        for (int i=0; i<n; i++)
        {
            int diff = target - nums[i];
            if (mp.count(diff))
            {
                if (mp[diff]!=i)
                    return {i,mp[diff]};
            }
        }
        return {};
    }
};