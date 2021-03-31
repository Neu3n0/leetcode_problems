// class Solution {
// public:
//     map<char, int> mapBuild(const string& s) {
//         map<char, int> ans;
//         for (auto c : s) {
//             ++ans[c];
//         }
//         return ans;
//     }
//     bool isAnagram(string s1, string s2) {
//         map<char, int> mp1 = mapBuild(s1);
//         map<char, int> mp2 = mapBuild(s2);
//         return mp1 == mp2;
//     }
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         vector<vector<string>> ans;
//         while (!strs.empty()) {
//             string word = strs[0];
//             vector<string> tmp;
//             tmp.push_back(word);
//             strs.erase(strs.begin());
//             for (auto it = strs.begin(); it != strs.end(); ++it) {
//                 if (isAnagram(word, *it)) {
//                     tmp.push_back(*it);
//                     strs.erase(it);
//                 }
//             }
//             ans.push_back(tmp);
//         }
//         return ans;
//     }
// };