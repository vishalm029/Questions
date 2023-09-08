class Solution {
    public:
    vector<vector<int>> generate(int numRows) {
        if (numRows < 0) 
        return {};
        vector<vector<int>> ret(numRows);
        for (int i = 0; i < numRows; ++i) {
            ret[i].resize(i + 1, 1);
            for (int j = 1; j < i; ++j)
            ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
            }
            return ret;
            }
};