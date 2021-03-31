#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

/*n^2*/
/*
bool is_palindrom(string w) {
    for (int i = 0; i < w.size() / 2; ++i) {
        if (w[i] != w[w.size() - 1 - i])
            return false;
    }
    return true;
}
string longestPalindrome(string s) {
    string answer = "";
    string st = "";
    // if (s.size() == 1) {
    //     return s;
    // }
    for (int i = 0; i < s.size(); ++i) {
        st = s[i];
        if (is_palindrom(st)) {
            if (st.size() > answer.size()) {
                answer = st;
            }
        } 
        for (int j = i + 1; j < s.size(); ++j) {
            st += s[j];
            if (is_palindrom(st)) {
                if (st.size() > answer.size()) {
                    answer = st;
                }
            }
        }
    }
    return answer;
};
*/

int main(){
    string s = "dsakdaskadadakow";
    //cout << longestPalindrome(s) << endl;
    return 0;
}