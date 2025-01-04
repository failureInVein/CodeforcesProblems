#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    int positions[3] = {x1, x2, x3};
    sort(positions, positions + 3);

    int median = positions[1];
    int dis = abs(median - positions[0]) + abs(median - positions[2]);

    cout << dis << endl;

    return 0;
}