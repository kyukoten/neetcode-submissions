class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<float> nums;
        merge(nums1.begin(), nums1.end(),
              nums2.begin(), nums2.end(),
              back_inserter(nums));
        int a = nums.size();
        if (a%2 == 0)
            return (nums[a/2] + nums[a/2 - 1]) / 2;
        return nums[a/2];
    }
};
