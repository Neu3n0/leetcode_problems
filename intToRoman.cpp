#include <iostream>
#include <string>
#include <map>

using namespace std;

/*
map<int, vector<char>> mp = {{'I', 'V'}, {'X', 'L'}, {'C', 'D'}, {'M', 'M'}};
        if (tmp > 0 && tmp < 4) {
            for (int i = 0; i < tmp; ++i) {
                answer.insert(answer.begin(), mp[c][0]);    
            }
        }
        if (tmp == 4) {
            answer.insert(answer.begin(), mp[c][1]);
            answer.insert(answer.begin(), mp[c][0]);        
        }
        if (tmp == 5) {
            answer.insert(answer.begin(), mp[c][1]);    
        }
        if (tmp > 5 && tmp < 9) {
            for (int i = 0; i < tmp % 5; ++i) {
                answer.insert(answer.begin(), mp[c][0]);   
            }
            answer.insert(answer.begin(), mp[c][1]);    
        }
        if (tmp == 9) {
            answer.insert(answer.begin(), mp[c + 1][0]);    
            answer.insert(answer.begin(), mp[c][0]);    
        }
        ++c;        
*/

string intToRoman(int num) {
    string answer;
    int tmp;
    int c = 0;
    while (num > 0) {
        tmp = num % 10;
        num /= 10;
        if (c == 0) {
            if (tmp > 0 && tmp < 4) {
                for (int i = 0; i < tmp; ++i) {
                    answer.push_back('I');    
                }
            }
            if (tmp == 4) {
                answer.push_back('I');
                answer.push_back('V');
            }
            if (tmp == 5) {
                answer.push_back('V');
            }
            if (tmp > 5 && tmp < 9) {
                answer.push_back('V');
                for (int i = 0; i < tmp % 5; ++i) {
                    answer.push_back('I');   
                }
            }
            if (tmp == 9) {
                answer.push_back('I');
                answer.push_back('X');
            }
        }    
        if (c == 1) {
            if (tmp > 0 && tmp < 4) {
                for (int i = 0; i < tmp; ++i) {
                    answer.insert(answer.begin(), 'X');    
                }
            }
            if (tmp == 4) {
                answer.insert(answer.begin(), 'L');    
                answer.insert(answer.begin(), 'X');    
            }
            if (tmp == 5) {
                answer.insert(answer.begin(), 'L');    
            }
            if (tmp > 5 && tmp < 9) {
                for (int i = 0; i < tmp % 5; ++i) {
                    answer.insert(answer.begin(), 'X');       
                }
                answer.insert(answer.begin(), 'L');    
            }
            if (tmp == 9) {
                answer.insert(answer.begin(), 'C');    
                answer.insert(answer.begin(), 'X'); 
            }
        } 
        if (c == 2) {
            if (tmp > 0 && tmp < 4) {
                for (int i = 0; i < tmp; ++i) {
                    answer.insert(answer.begin(), 'C');    
                }
            }
            if (tmp == 4) {
                answer.insert(answer.begin(), 'D');    
                answer.insert(answer.begin(), 'C');    
            }
            if (tmp == 5) {
                answer.insert(answer.begin(), 'D');    
            }
            if (tmp > 5 && tmp < 9) {
                for (int i = 0; i < tmp % 5; ++i) {
                    answer.insert(answer.begin(), 'C');       
                }
                answer.insert(answer.begin(), 'D');    
            }
            if (tmp == 9) {
                answer.insert(answer.begin(), 'M');    
                answer.insert(answer.begin(), 'C'); 
            }
        }      
        if (c == 3) {
            for (int i = 0; i < tmp; ++i) {
                answer.insert(answer.begin(), 'M'); 
            }
        }            
        ++c;   
    }
    return answer;
}

int main() {
    int x;    
    cin >> x;
    cout << intToRoman(x) << endl;
    return 0;
}