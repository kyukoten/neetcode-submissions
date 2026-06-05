class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0;
        
        // Check for each of the 26 possible uppercase letters
        for (int i = 0; i < 26; i++) {
            char a = 'A' + i;
            int l = 0;
            int diff = 0; // Counts characters in window that are NOT 'a'
            
            // Expand the window with r
            for (int r = 0; r < s.size(); r++) {
                if (s[r] != a) {
                    diff++;
                }
                
                // If we need more than k replacements, shrink the window from the left
                while (diff > k) {
                    if (s[l] != a) {
                        diff--;
                    }
                    l++; // Shrink window
                }
                
                // Now the window is guaranteed to be valid, update max length
                ans = max(ans, r - l + 1);
            }
        }
        
        return ans;
    }
};
