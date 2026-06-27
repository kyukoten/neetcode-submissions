class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for (int i=0; i<=n; i++)
        {
            int a=i;
            int count=0;
            while(a)
            {
                int dig = a%2;
                if (dig==1)
                    count++;
                a/=2;
            }
            ans[i]=count;
        }
        return ans;
    }
};
