#include <iostream>

using namespace std;

long reverse_num(long num) {
    long res = 0;
    while(num) {
        res = res * 10 + num % 10;
        num /= 10;
    }
    return res;
}
int myAtoi(string s) {
    long result = 0;
    int k = 0;
    int sigh = 1;
    for (auto ch : s) {
        if (ch == ' ') {
            continue;
        }
        if (ch == '0') {
            if (result == 0) {
                continue;
            }
            else {
                ++k;
            }
        }
        if (ch == '-') {
            sigh = -1;
            continue;
        }
        if (ch == '1') {
            result += 1 * pow(10, k);
            ++k;
        }
        if (ch == '2') {
            result += 2 * pow(10, k);
            ++k;
        }
        if (ch == '3') {
            result += 3 * pow(10, k);
            ++k;
        }
        if (ch == '4') {
            result += 4 * pow(10, k);
            ++k;
        }
        if (ch == '5') {
            result += 5 * pow(10, k);
            ++k;
        }
        if (ch == '6') {
            result += 6 * pow(10, k);
            ++k;
        }
        if (ch == '7') {
            result += 7 * pow(10, k);
            ++k;
        }
        if (ch == '8') {
            result += 8 * pow(10, k);
            ++k;
        }
        if (ch == '9') {
            result += 9 * pow(10, k);
            ++k;
        }
        else {
            if(result == 0) {
                return 0;
            }
            else {
                continue;
            }
        }
    }
    //result = reverse_num(result);
    result *= sigh;
    return result;
}

int main() {
    string s = "-91283472332";
    cout << myAtoi(s) << endl;
    return 0;
}