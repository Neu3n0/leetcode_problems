// // #include <iostream>
// // #include <vector>
// // #include <map>
// // #include <string>
// // #include <queue>
// // #include <stack>

// // using namespace std;

// // int main() {
// //     // int* arr1[2];
// //     // for (int i = 0; i < 2; ++i) {
// //     //     arr1[i] = new int;
// //     // }
// //     // *arr1[0] = 2;
// //     // *arr1[1] = 22;
// //     // int* arr2[2];
// //     // arr2[0] = arr1[0];
// //     // arr2[1] = arr2[1];
// //     // for (int i = 0; i < 2; ++i) {
// //     //     cout << *arr1[i] << " " << *arr2[i] << endl;
// //     // }
// //     // *arr1[0] = 3;
// //     // for (int i = 0; i < 2; ++i) {
// //     //     cout << *arr1[i] << " " << *arr2[i] << endl;
// //     // }
// //     // int* kek[2];
// //     // for (int i = 0; i < 2; ++i) {
// //     //     kek[i] = new int;
// //     // }
// //     // *kek[0]  =  1;
// //     // *kek[1] = 11;
// //     // *arr2[0] = *kek[0];
// //     // for (int i = 0; i < 2; ++i) {
// //     //     cout << *arr1[i] << " " << *arr2[i] << endl;
// //     // }
// //     // for (int i = 0; i < 2; ++i) {
// //     //     delete arr1[i];
// //     //     delete kek[i];
// //     // }
// //     int* arr1[2];
// //     for (int i = 0; i < 2; ++i) {
// //         arr1[i] = new int;
// //     }
// //     *arr1[0] = *arr1[1] = 1;
// //     cout << "arr1:\n";
// //     for (int i = 0; i < 2; ++i) {
// //         cout << arr1[i] << " " << *arr1[i] << endl;
// //     }
// //     int* arr2[2];
// //     cout << "arr2:\n";
// //     for (int i = 0; i < 2; ++i) {
// //         cout << arr2[i] << endl;
// //     }
// //     arr2[0] = arr1[0];
// //     arr2[1] = arr1[1];
// //     cout << "arr2:\n";
// //     for (int i = 0; i < 2; ++i) {
// //         cout << arr2[i] << " " << *arr2[i] << endl;
// //     }
// //     int* kek[2];
// //     for (int i = 0; i < 2; ++i) {
// //         kek[i] = new int;
// //     }
// //     *kek[0] = *kek[1] = 2;
// //     cout << "kek:\n";
// //     for (int i = 0; i < 2; ++i) {
// //         cout << kek[i] << " " << *kek[i] << endl;
// //     }
// //     swap(kek[0], arr1[0]);
// //     cout << "/////////////////\n";
// //     cout << "kek:\n";
// //     for (int i = 0; i < 2; ++i) {
// //         cout << kek[i] << " " << *kek[i] << endl;
// //     }
// //     cout << "arr1:\n";
// //     for (int i = 0; i < 2; ++i) {
// //         cout << arr1[i] << " " << *arr1[i] << endl;
// //     }
// //     cout << "arr2:\n";
// //     for (int i = 0; i < 2; ++i) {
// //         cout << arr2[i] << " " << *arr2[i] << endl;
// //     }
// //     for (int i = 0; i < 2; ++i) {
// //         delete arr1[i];
// //         delete kek[i];
// //     }
// //     return 0;
// // }



// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;


// void go(const vector<int>& cand, int target, vector<int>& curRep, int minIndex, int curSum, int& answer) {
//     if (curSum == target && curRep.size() == 3) {
//         ++answer;
//         return;
//     }
//     for (int i = minIndex; i < cand.size() && curSum + cand[i] <= target && curRep.size() <= 3; ++i) {
//         curRep.push_back(cand[i]);
//         go(cand, target, curRep, 0, curSum + cand[i], answer);
//         curRep.pop_back();
//     }
// }

// int combinationSum(vector<int>& candidates, int target) {
//     vector<int> curRep;
//     int answer = 0;
//     go(candidates, target, curRep, 0, 0, answer);
//     return answer;
// }


// int main() {
//     vector<vector<int>> ans;
//     vector<int> cand = {0, 1, 2};
//     int target = 5;
//     cout << combinationSum(cand, target);
//     return 0;
// }

// /*
// 122
// 212
// 221
// */

#include <iostream> 
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

int ll = 6;

void go(const vector<int>& cand, int target, vector<int>& curRep, int minIndex, int curSum, int& anss) {
    if (curSum == target && curRep.size() == ll) {
        ++anss;
        return;
    }
    for (int i = minIndex; i < cand.size() && curSum + cand[i] <= target && curRep.size() <= ll; ++i) {
        curRep.push_back(cand[i]);
        go(cand, target, curRep, 0, curSum + cand[i], anss);
        curRep.pop_back();
    }
}

int combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> curRep;
    int anss = 0;
    go(candidates, target, curRep, 0, 0, anss);
    return anss;
}

vector<int> Generate6Num(int x) {
    vector<int> ans(6);
    for (int i = 0; i < 6; ++i) {
        ans[i] = 0;
    }
    int j = 5;
    while (x > 0) {
        int y = x % 13;
        ans[j] = y;               
        x /= 13;
        --j;
    }
    return ans;
}

int sumr(vector<int> s1) {
    int ans = 0;
    for (int i = 0; i < s1.size(); ++i) {
        ans += s1[i];
    }
    return ans;
}

int main() {
    // vector<vector<int>> ans;
    // long long answer = 0;
    // vector<int> s1;
    // vector<int> cand = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // map<int, int> mp;
    // int su, x;
    // for (int i = 0; i <= 4826808; ++i) {
    //     s1 = Generate6Num(i);
    //     int su = sumr(s1);
    //     if (mp.find(su) != mp.end()) {
    //         answer += mp[su];
    //     }
    //     else{
    //         x = combinationSum(cand, su);
    //         answer += x;
    //         mp[su] = x;
    //         cout << su << "\t\t" << answer << endl;
    //     }
    // }
    //cout << 13 * answer << endl;
    vector<int> a;
    a = Generate6Num(4826708);
    for (auto x : a) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
//-842559065        239271785501095
//239271785501095
//9203637295138
//9203637295151
/*
if (mp.find(target - nums[i]) != mp.end()) {
                nums.clear();
                nums.push_back(i);
                nums.push_back(mp[target - nums[i]]);
                return nums;
            }
            mp[nums[i]] = i;
*/


/*
0:
000000
t = 1;

1:
000001
t = 6;

2: 
000002
t = 6;
2
000011; 5 + 4 + 3 + 2 + 1 = 15
000101;
001001;
010001;
100001;
000110;
001010;
010010;
100010;
001100;
010100;
100100;
011000;
101000;
110000;

000002; 6
3:
000111;
001011;
010011;
100011;
001101;
010101;
100101;
011001;
101001;
110001;

000012;
000102;
001002;
010002;
100002;

*/