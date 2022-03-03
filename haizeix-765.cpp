//
// http://oj.haizeix.com/problem/766
//
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> houses;
    int house;
    for (int i = 0; i < n; ++i) {
        cin >> house;
        houses.push_back(house);
    }

    vector<int> heaters;
    int heater;
    for (int i = 0; i < m; ++i) {
        cin >> heater;
        heaters.push_back(heater);
    }

    int res = INT_MIN;
    for (int i = 0; i < n; ++i) {
        int min = INT_MAX;
        for (int j = 0; j < m; ++j) {
            if (abs(houses[i] - heaters[j]) < min) min = abs(houses[i] - heaters[j]);
        }
        if (min > res) res = min;
    }
    cout << res;

    return 0;
}