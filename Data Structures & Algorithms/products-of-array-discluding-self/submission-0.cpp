class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int count = 0;
        for (auto i:nums)
        {
            if (i!=0)
                product *= i;
            else
                count++;    
        }
        vector<int>ans;
        for (auto i:nums)
        {
            if (count==0)
                ans.push_back(product/i);
            else if(count==1)
            {
                if (i==0)
                    ans.push_back(product);
                else
                    ans.push_back(0);    
            }
            else
                ans.push_back(0);
        }
        return ans;        
    }
};
