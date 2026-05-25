class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
            if(mp[i]>1)
                return true;
        }
        return false;

        // long long a = 2*(pow(10,9)) + 1;
        // vector<long long> freq(a,0);
        // for (auto i:nums)
        // {
        //     freq[ i + ((a-1)/2) ]++;
        //     if(freq[ i + ((a-1)/2) ]>1)
        //         return true;
        // }
        // return false;
    }
};