class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>nums;
        for (auto i:matrix)
        {
            for (auto j:i)
                nums.push_back(j);
        }
        int l=0;
        int r=nums.size()-1;
        while (l<=r)
        {
            int mid = l + ((r-l)/2);
            if (nums[mid]==target)
                return true;
            else if (nums[mid]>target)
                r = mid-1;
            else
                l = mid+1;    
        }
        return false;
    }
};
