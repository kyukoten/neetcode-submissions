class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>,vector<int>>mp;
        vector<vector<int>> freq (strs.size(),vector<int>(26,0));
        int idx = 0;
        for (auto i:strs)
        {
            for(auto j:i)
                freq[idx][j-'a']++; 
            mp[freq[idx]].push_back(idx);
            idx++;
        }
        idx = 0;
        for (auto i:mp)
        {
            vector<string> temp;
            for (auto j:i.second)
                temp.push_back(strs[j]);
            ans.push_back(temp);    
            idx++;    
        }
        return ans;
    }
};
