class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<bool> check_row(m,0);
        vector<bool> check_col(n,0);
        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    check_row[i] = 1;
                    check_col[j] = 1;
                }
            }
        }

        for(int i = 0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(check_row[i] || check_col[j])
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
