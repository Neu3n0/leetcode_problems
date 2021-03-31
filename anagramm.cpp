// class Solution {
// public:
//     map <char, int> build_mp(const string& s) {
//         map<char, int> mp;
//         for (const char& ch : s) {
//             ++mp[ch];
//         }
//         return mp;
//     }
//     bool isAnagram(string& s, string& t) {
//         map<char, int> sm = build_mp(s);
//         map<char, int> tm = build_mp(t);
//         return sm == tm;
//     }
// };
// class Solution {
// public:
//     bool isAnagram(string &s, string &t) {
//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());
//         return s == t;
//     }
// };
// class Solution {
// public:
//     bool isAnagram(string& s, string& t) {
//         if (s.size() != t.size()) {
//             return false;
//         }
//         size_t count[1 + 'z'] = {};
//         for (const char& c : s) {
//             ++count[c];
//         }
//         for (const char& c : t) {
//             --count[c];
//         }
//         for (char c = 'a'; c <= 'z'; ++c) {
//             if (count[c] != 0) {
//                 return false;
//             }
//         }
//         return true;
//     }
// };