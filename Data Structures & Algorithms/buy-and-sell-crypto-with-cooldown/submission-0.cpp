class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int held = -prices[0];
        int rest = 0;
        int sold = INT_MIN;
        for (auto i:prices)
        {
            int a = held;
            int b = sold;
            held = max (a,rest-i);
            rest = max (rest,b);
            sold = a+i;
        }
        return max (rest,sold);
    }
};
