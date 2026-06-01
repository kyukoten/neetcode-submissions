class Solution {
public:
    int characterReplacement(string s, int k) {
        // unordered_map<char,int>freq;
        // unordered_map<char,vector<int>>mp;
        // for (int j=0; j<s.size(); j++)
        // {
        //     char i = s[j];
        //     freq[i]++;
        //     if (mp.count(i)==0)
        //         mp[i] = {j,j};
        //     else
        //         mp[i][1] = j;
        // }
        // int ans = 0;
        // for (auto &j:mp)
        // {
        //     int count = freq[j.first];
        //     int size = j.second[1]-j.second[0]+1;
        //     if (size-count<=k)
        //         ans = max(size,ans);
        // }
        // return ans;

        int l=0;
        int r=0;
        int ans = 0;
        while (r<s.size())
        {
            unordered_map<char,int>freq;
            int diff = 0;
            int mx = 0;
            while (r<s.size() && diff<=k)
            {
                freq[s[r]]++;
                mx = max(mx,freq[s[r]]);
                int size = r-l+1;
                diff = size - mx;
                if (diff<=k)
                    ans = max(size,ans);
                r++;
            }
            l++;
            r=l;
        }
        return ans;
    }
};
