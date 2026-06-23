class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        map<vector<int>,int>mp;
        int m = matrix.size();
        int n = matrix[0].size();
        if (m==1)
            return matrix[0];
        int a=0;
        int i=0;
        int j=0;
        int direc=0;
        vector<int> next;
        if (n==1)
        {
            direc=1;
            next={1,0};
        }
        else
        {
            direc=0;
            next = {0,1};
        }
        while (mp.count(next)==0)
        {
            ans.push_back(matrix[i][j]);
            mp[{i,j}]++;
            if (direc==0)
            {
                if (j<n-1-a)
                    j++;
                else
                {
                    direc=1;
                    i++;
                }    
            }
            else if(direc==1)
            {
                if (i<m-1-a)
                    i++;
                else
                {
                    direc=2;
                    j--;
                }    
            }
            else if(direc==2)
            {
                if (j>a)
                    j--;
                else
                {
                    i--;
                    direc=3;
                }
            }
            else
            {
                if (i>a+1)
                    i--;
                else
                {
                    a++;
                    direc=0;
                    j++;
                }
            }
            if (i>=a && i<m && j>=a && j<n)
                next = {i,j};
            else
                break;    
        }
        return ans;
    }
};
