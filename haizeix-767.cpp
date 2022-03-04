//
// http://oj.haizeix.com/problem/767
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isValid(vector<int>& array, int D, int cap) {
    int num = 1;
    int sum = 0;
    for (int bag : array) {
        if (sum + bag <= cap) {
            sum += bag;
        } else {
            num += 1;
            sum = bag;
        }
    }
    return num <= D;
}

int main() {
    int n, D;
    cin >> n >> D;

    vector<int> array;
    int bag, sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> bag;
        array.push_back(bag);
        sum += bag;
    }
    int avg = ceil(sum * 1.0 / D);

    for (int i = avg; i <= sum; ++i) {
        if (isValid(array, D, i)) {
            cout << i;
            break;
        }
    }

    return 0;
}