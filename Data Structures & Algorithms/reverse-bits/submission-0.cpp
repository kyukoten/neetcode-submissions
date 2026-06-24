class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int> bit(32);
        for (int i=31; i>=0; i--)
        {
            long long a = pow(2,i);
            if (n-a>=0)
            {
                bit[i]=1;
                n = n-a;
            }
        }
        int ans=0;
        for (int i=0; i<=31; i++)
        {
            long long a = pow(2,31-i)*bit[i];
            ans+=a;
        }
        return ans;
    }
};
