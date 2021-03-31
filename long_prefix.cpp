// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         string ans = "";
//         if (strs.size() < 1) {
//             return ans;
//         }
//         string word = strs[0];
//         for (int i = 0; i < word.size(); ++i) {
//             char x = word[i];
//             for (int j = 1; j < strs.size(); ++j) {
//                 if (i == strs[j].size() || strs[j][i] != x) {
//                     return strs[0].substr(0 , i);
//                 }
//             }
//         }
//         return word;
//     }
// };
//wa
// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         string ans = "";
//         if (strs.size() < 1) {
//             return ans;
//         }
//         for (auto s : strs) {
//             if (s.size() < 1) {
//                 return "";
//             }
//         }
//         int i = 0;
//         map<char, int> mp;
//         while (true) {
//             for (int j = 0; j < strs.size(); ++ j) {
//                 ++mp[strs[j][i]];
//                 if (strs[j][i] == strs.size()) {
//                     break;
//                 }
//             }
//             if (mp[strs[0][i]] == strs.size()) {
//                 ans += strs[0][i];
//                 ++i;
//             }
//             else {
//                 break;
//             }
//         }
//         return ans;
//     }
// };