class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        vector<int> dp(n+1);
        dp[0] = 1;
        dp[1] = (s[0]=='0') ? 0 : 1;
        for (int i=2; i<n+1; i++)
        {
            int a = (s[i-2]-'0')*10 + s[i-1]-'0';
            dp[i] = ( (s[i-1]-'0'>=1 && s[i-1]-'0'<=9) ? dp[i-1] : 0 ) + ( (a>=10 && a<=26) ? dp[i-2] : 0 );
        }
        return dp[n];
    }
};
