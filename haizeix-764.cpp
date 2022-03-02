//
// http://oj.haizeix.com/problem/764
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int length;
    cin >> length;

    vector<int> array;
    int element;
    for (int i = 0; i < length; ++i) {
        cin >> element;
        array.push_back(element);
    }
    
    int target;
    cin >> target;

    int low = 0;
    int high = length - 1;
    int index = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (target == array[mid]) {
            index = mid;
            break;
        } else if (target < array[mid] && array[low] <= array[mid] || target > array[mid] && array[low] >= array[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << (low <= high ? "yes" : "no");
}