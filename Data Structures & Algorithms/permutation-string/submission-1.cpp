class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size()>s2.size())
            return false;
        vector<int>freq(26,0);
        for(auto i:s1)
            freq[i-'a']++;
        vector<int>temp(26,0);    
        int l=0;
        int r=0;
        while (r<s1.size())
        {
            temp[s2[r]-'a']++;
            r++;
        }
        // cout << s1.size() << "\t" << r;
        int count=0;
        for (int i=0; i<26; i++)
        {
            if (freq[i]==temp[i])
                count++;
        }
        if (count==26)
            return true;
        while (r<s2.size())
        {
            int a = s2[l]-'a';
            int b = s2[r]-'a';
            if (a==b)
            {
                l++;
                r++;
                continue;
            }
            temp[a]--;
            temp[b]++;
            if (temp[a]==freq[a]-1)
                count--;
            else if(temp[a]==freq[a])
                count++;
            
            if(temp[b]==freq[b]+1)
                count--;
            else if(temp[b]==freq[b])
                count++;

            cout << r << "\t" << count << "\n";
            if (count==26)
                return true;
            l++;
            r++;    
        }
        return false;
    }
};
