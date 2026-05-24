class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        vector<int>freq(256,0);
        int ans=0;
        while(r<s.size())
        {
            freq[s[r]-'\0']++;
            if (freq[s[r]-'\0']>1)
            {
                while(freq[s[r]-'\0']!=1)
                {
                    freq[s[l]-'\0']--;
                    l++;
                }
            }
            ans = max(ans,r-l+1);
            r++;
        }
        return ans;
    }
};
