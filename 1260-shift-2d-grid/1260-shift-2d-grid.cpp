class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int col = grid[0].size();
        int totSize = row * col;

        k = k%totSize;

        vector<vector<int>> ans(row, vector<int>(col));
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < col ; j++){
                int newIdx = i * col + j + k;
                int newRow = (newIdx / col ) % row;
                int newCol = newIdx % col;
                ans[newRow][newCol] = grid[i][j];
            }
        }
        return ans;
        
    }
};