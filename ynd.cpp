#include <iostream>
#include <string> 
#include <vector>
#include <cmath>
#include <algorithm>
#include <fstream>
#include <map>

using namespace std;

/*A*/
// int main() {
//     string str1;
//     string str2;
//     cin >> str1 >> str2;
//     int ans = 0;
//     for (const char& ch2 : str2) {
//         if (str1.find(ch2) != string::npos) {
//             ++ans;
//         }
         
//     }
//     cout << ans << endl;
//     return 0;
// }

/*B*/
// int main() {
//     int n;
//     cin >> n;
//     int ans = 0;
//     int x;
//     int tmp = 0;
//     for (int i = 0; i < n; ++i) {
//         cin >> x;
//         if (x == 1) {
//             ++tmp;
//             if (tmp > ans) {
//                 ans = tmp;
//             }
//         }
//         if (x == 0) {
//             tmp = 0;
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }

/*C*/
// int main() {
//     ofstream fout("ans.txt");
//     int n;
//     cin >> n;
//     if (n  == 0) {
//         return 0;
//     }
//     int x;
//     int prev;
//     cin >> prev;
//     fout << prev << endl;
//     for (int i = 1; i < n; ++i) {
//         cin >> x;
//         if (x == prev) {
//             continue;
//         }
//         else {
//             prev = x;
//             fout << prev << endl;
//         }
//     }
//     return 0;
// }

/*D*/


/*E*/
// map<char, int> BuildCharCount(const string& word) {
//     map<char, int> mp;
//     for (const char& ch : word) {
//         ++mp[ch];
//     }
//     return mp;
// }

// int main() {
//     string s1;
//     string s2;
//     cin >> s1 >> s2;
//     map<char, int> b1 = BuildCharCount(s1);
//     map<char, int> b2 = BuildCharCount(s2);
//     if (b1 == b2) {
//         cout << 1 << endl;
//     }
//     else {
//         cout << 0 << endl;
//     }
//     return 0;
// }

/*F*/

