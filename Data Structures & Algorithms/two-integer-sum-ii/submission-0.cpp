class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int r=numbers.size()-1;
        while (l<r)
        {
            int diff = target - numbers[l];
            while (l<r)
            {
                if (numbers[r]==diff)
                    return {l+1,r+1};
                r--;    
            }
            r=numbers.size()-1;
            l++;
        }
        return {};
    }
};
