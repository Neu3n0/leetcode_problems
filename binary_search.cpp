#include <iostream>
#include <assert.h>
#include <vector>
#include <ctime>

using namespace std;

void Rand_vec_1(vector<int>& arr, const int& n) {
    srand(time(nullptr));
    for (int i = 0; i < n; ++i) {
        int x = rand() % 10;
        arr.push_back(x);
    }
}

void Print_vec(vector<int> arr) {
    cout << arr.size() << endl;
    for (const int& x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    assert(n >= 0);
    vector<int> arr;
    Rand_vec_1(arr, n);
    Print_vec(arr);
    return 0;
}