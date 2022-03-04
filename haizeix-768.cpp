//
// http://oj.haizeix.com/problem/768
//
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arrN;
    int eleN;
    for (int i = 0; i < n; ++i) {
        cin >> eleN;
        arrN.push_back(eleN);
    }

    vector<int> arrM;
    int eleM;
    for (int i = 0; i < m; ++i) {
        cin >> eleM;
        arrM.push_back(eleM);
    }

    std::sort(arrN.begin(), arrN.end());
    std::sort(arrM.begin(), arrM.end());

    vector<int> merge;
    int idxN = 0, idxM = 0;
    n = arrN.size();
    m = arrM.size();
    while (idxN < n && idxM < m) {
        if (arrN[idxN] < arrM[idxM]) {
            merge.push_back(arrN[idxN++]);
        } else {
            merge.push_back(arrM[idxM++]);
        }
    }
    while (idxN < n) merge.push_back(arrN[idxN++]);
    while (idxM < m) merge.push_back(arrM[idxM++]);

    const float res = ((n + m) % 2 == 1)
                    ? merge[(n + m) / 2.0]
                    : (merge[(n + m) / 2 - 1] + merge[(n + m) / 2]) / 2.0;
    cout << std::fixed << std::setprecision(1) << res;

    return 0;
}