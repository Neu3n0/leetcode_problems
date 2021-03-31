// class Solution {
// public:
//     bool isValidSudoku(vector<vector<char>>& board) {
//         bool iwas[9][9] = {};   //i digit - 1 
//         bool jwas[9][9] = {};   //j  digit - 1
//         bool ijwas[3][3][9] = {};   //i / 3 j / 3 digit - 1
//         for (int r = 0; r < 9; ++r) {
//             for (int c = 0; c < 9; ++c) {
//                 char ch = board[r][c];
//                 if (ch == '.') {
//                     continue;
//                 }
//                 int d = ch - '1';
//                 if (iwas[r][d]) {
//                     return false;
//                 }
//                 iwas[r][d] = true;
//                 if (jwas[c][d]) {
//                     return false;
//                 }
//                 jwas[c][d] = true;
//                 if (ijwas[r / 3][c / 3][d]) {
//                     return false;
//                 }
//                 ijwas[r / 3][c / 3][d] = true;
//             }
//         }
//         return true;
//     }
// };