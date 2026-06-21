class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int> row;
        unordered_map<int,int> col;
        for (int i=0; i<matrix.size(); i++)
        {
            for (int j=0; j<matrix[0].size(); j++)
            {
                if (matrix[i][j]==0)
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        for (int i=0; i<matrix.size(); i++)
        {
            for (int j=0; j<matrix[0].size(); j++)
            {
                if (row.count(i) || col.count(j))
                    matrix[i][j]=0;
            }
        }
    }
};
