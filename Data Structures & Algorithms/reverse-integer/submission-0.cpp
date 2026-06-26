class Solution {
public:
    int reverse(int x) {
        long long y = x;
        vector<long long> digit;
        long long max = pow(2,31) - 1;
        int b=1;
        if (y<0)
        {
            y*=-1;
            b=-1;
        }
        int i=10;
        while (y!=0)
        {
            digit.push_back(y%i);
            y=y/i;
        }
        long long n=digit.size();
        long long c=1;
        for (int a=n-1; a>=0; a--)
        {
            y += c*digit[a];
            c *= 10;
        }
        if (y>max)
            return 0;
        else    
            return y*b;
    }
};
