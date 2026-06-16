class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i=n-1; 
        while (i>=0 && digits[i]==9)
        {
            if (i==0)
            {
                digits[i]=0;
                digits.push_back(0);
            }
            else {
            digits[i]=0;
            i--;
            }
        }
        digits[i] = digits[i] + 1;
        return digits;
    }
};
