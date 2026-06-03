class Solution {
public:
    int climbStairs(int n) {
        int a = 1;
        int b = 1;
        int ans = 1;
        while (n!=1)
        {
            int temp = a+b;
            ans = temp;
            a = b;
            b = temp;
            n--;
        }
        return ans;
    }
};
