class Solution {
public:

    string encode(vector<string>& strs) {
        string s;
        for (auto i:strs)
        {
            if (i=="")
            {
                s = s + '+' + '+';
                continue;
            }
            for(auto j:i)
            {
                int a = j;
                string b = to_string(a);
                s = s + b + '+';
            }
            s += '+';
        }
        cout << s ;
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        while (i<s.size())
        {
            int l=i;
            if (s[l]=='+' && s[l+1]=='+')
            {
                ans.push_back("");
                i=i+2;
                continue;
            }
            while (i+2<s.size() && (s[i+1]!='+' || s[i+2]!='+'))
                i++;
            int r=i;
            string temp1;
            while (l<=r)
            {
                string temp2;
                while(s[l]!='+' && l<=r)
                {
                    temp2+=s[l];
                    l++;
                }
                int a;
                if (temp2.size()!=0)
                    a = stoi(temp2);
                else
                    break;    
                temp1 += a;
                l++;
            }
            ans.push_back(temp1);
            i = i+3;
        }
        return ans;
    }
};
