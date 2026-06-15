class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>mp;
        mp[n]++;
        while(n!=1)
        {
            int sum=0;
            while(n)
            {
                sum += (n%10)*(n%10);
                n=n/10;
            }
            n = sum;
            if(mp.count(n))
                return false;
            if(n>=INT_MAX)
                return false;
            mp[n]++;
        }
        return true;
    }
};
