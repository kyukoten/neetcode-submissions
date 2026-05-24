class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int r=s.size()-1;
        unordered_map<char,int>mp;
        for(int i=0; i<26; i++)
        {
            mp[i+'A']++;
            mp[i+'a']++;
        }
        for(int i=0; i<10; i++)
            mp['0'+i]++;
        while (l<=r)
        {
            while(mp.count(s[l])==0)
                l++;
            while(mp.count(s[r])==0)
                r--;
            if (l>r)
                break;
            if(s[l]>='A' && s[l]<='Z')
                s[l] = (s[l]-'A') + 'a';    
            if(s[r]>='A' && s[r]<='Z')
                s[r] = (s[r]-'A') + 'a';    
            if (s[l]!=s[r])
                return false;        
            l++;
            r--;    
        }
        return true;
    }
};
