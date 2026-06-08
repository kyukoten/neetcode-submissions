class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();
        vector<bool> dp (n+1,false);
        dp[0] = true;
        map<string,int>mp;
        for (auto i:wordDict)
            mp[i]++;
        for (int i=0; i<n; i++)
        {
            int j=i+1;
            while(j)
            {
                string a(s.begin()+j-1,s.begin()+i+1);
                dp[i+1] = (dp[j-1] && mp.count(a)) ? true : false;
                if (dp[i+1])
                    break;
                j--;
            }
        }
        return dp[n];
    }
};
