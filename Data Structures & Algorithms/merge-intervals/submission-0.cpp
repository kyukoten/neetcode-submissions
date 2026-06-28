class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0]; // sort by first element
    });
        int left = intervals[0][0];
        int right = intervals[0][1];
        for (int i=1; i<intervals.size(); i++)
        {
            int a = intervals[i][0];
            int b = intervals[i][1];
            // while (i<intervals.size()-1 && intervals[i+1][0]<=b)
            //     i++;
            // b = max(b,intervals[i][1]);
            // ans.push_back({a,b});
            if (a<=right)
                right = max(right,b);
            else
            {
                ans.push_back({left,right});
                left = a;
                right = b;
            }   
        }
        ans.push_back({left,right});
        return ans;
    }
};
