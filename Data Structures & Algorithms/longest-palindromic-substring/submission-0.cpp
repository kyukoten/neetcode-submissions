class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n==1)
            return s;
        if (n==2)
            return s[0]==s[1] ? s : string(1, s[0]);    
        int b = 0;
        string ans;
        while (b<n-1)
        {
            string temp = string(1, s[b]);
            int i = 1;
            while (b<n-1 && s[b]==s[b+1])
            {
                temp = temp + s[b+1];
                b++;
                i++;
            }
            int a = b-i;
            int c = b+1;
            while (a>=0 && c<n && s[a]==s[c])
            {
                temp = s[a] + temp + s[c];
                a--;
                c++;
            }
            if (temp.size()>ans.size())
                ans = temp;
            b++;    
        }
        // b = 0;
        // while (b<n)
        // {
        //     string tem = string(1,s[b]);
        //     int p = b;
        //     while (p<n-1 && s[p]==s[p+1])
        //     {
        //         tem = tem + s[p+1];
        //         p++;
        //     }
        //     if (tem.size()>ans.size())
        //         ans = tem;
        //     b=p+1;    
        // }
        return ans;
    }
};
