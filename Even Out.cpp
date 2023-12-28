#include <iostream>

using namespace std;

int main() {
  int T,a;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
      cin >> a;
      sum += a;
    }
    if (sum % 2 == 1) {
      count = n;
    } else {
      for (int i = 0; i < n; i++) {
        if (sum - a % 2 == 0) {
          count++;
        }
      }
    }
    cout << count << endl;
  }
  return 0;
}
