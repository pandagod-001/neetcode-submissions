class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board) {
        int rows[9] = {0};
        int cols[9] = {0};
        int boxes[9] = {0};
        
        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if (board[r][c] == '.') continue;
                int val_bit = 1 << (board[r][c] - '1');
                int box_idx = (r / 3) * 3 + (c / 3);
                if ((rows[r] & val_bit) || (cols[c] & val_bit) || (boxes[box_idx] & val_bit)) {
                    return false;
                } 
                rows[r] |= val_bit;
                cols[c] |= val_bit;
                boxes[box_idx] |= val_bit;
            }
        }
        
        return true;
    }
};