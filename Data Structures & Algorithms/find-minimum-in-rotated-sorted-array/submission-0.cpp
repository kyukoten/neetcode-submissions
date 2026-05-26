class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0;
        int r=nums.size()-1;
        int mn = INT_MAX;
        while (l<=r)
        {
            int mid = l + ((r-l)/2);
            mn = min(mn,nums[mid]);
            if (nums[l]<=nums[mid])
            {
                if (mn>nums[r])
                    l=mid+1;
                else
                    r=mid-1;    
            }
            else
                r=mid-1;
        }
        return mn;
    }
};
