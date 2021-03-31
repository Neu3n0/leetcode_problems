#include <iostream>
#include <string>

using namespace std;
/*n^2*/
/*
int lengthOfLongestSubstring(string s) {
    int answer = 1;
    string st;
    if (s == "") {
        return 0;
    }
    for (int i = 0; i < s.size(); ++i) {
        st = s[i];
        for (int j = i + 1; j < s.size(); ++j) {
            if (st.find(s[j]) == string::npos) {
                st += s[j];
                //cout << st << endl;
                if (st.size() > answer) {
                    answer = st.size();
                }
            }
            else {
                st = "";
                break;
            }
        }
    }
    return answer;
}
*/

/*n*/
/*
int lengthOfLongestSubstring(string s) {
    int answer = 0;
    string st = "";
    if (s == "") {
        return 0;
    }
    for (int i = 0; i < s.size(); ++i) {
        if (st.find(s[i]) == string::npos) {
            st += s[i];
            if (answer < st.size()) {
                answer = st.size();
            }
        }
        else {
            st.erase(0, st.find(s[i]) + 1);
            st += s[i];
        }
    }
    return answer;
}  
*/
int main() {
    string s = "abcadbcbb";
    //cout << lengthOfLongestSubstring(s) << endl;
    return 0;
}