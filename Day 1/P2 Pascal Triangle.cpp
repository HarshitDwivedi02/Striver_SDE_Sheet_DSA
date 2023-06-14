class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> res1;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> res2;
            for(int j = 0; j <= i; j++)
            {
                if ((j == 0) || (j == i))
                {
                    res2.push_back(1);
                }
                else 
                {
                    res2.push_back(res1[i - 1][j - 1] + res1[i - 1][j]);
                }
            }
            res1.push_back(res2);
        }
        return res1;
    } 
};