//
// http://oj.haizeix.com/problem/766
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int length;
    cin >> length;

    vector<int> array;
    vector<int> dp;
    int element;
    for (int i = 0; i < length; ++i) {
        cin >> element;
        array.push_back(element);
        dp.push_back(1);
    }

    if (length > 1) {
        for (int i = 1; i < length; ++i) {
            for (int j = 0; j < i; ++j) {
                if (array[i] > array[j] && dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                }
            }
        }
    }

    int res = dp[0];
    for (int num : dp) {
        if (num > res) res = num;
    }
    cout << res;
}