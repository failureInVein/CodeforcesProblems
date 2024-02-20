#include<bits/stdc++.h>
using namespace std;
char best_five(string str) {
    int count_A = 0, count_B = 0;
    for (char c : str) {
        if (c == 'A') {
            count_A++;
        } else {
            count_B++;
        }
    }
    if (count_A > count_B) {
        return 'A';
    } else if (count_B > count_A) {
        return 'B';
    } else {
        return 'A';
    }
}
int main(){
    int t;
    cin >> t; 
    for (int i = 0; i < t; ++i) {
        string str;
        cin >> str; 
        char result = best_five(str);
        cout << result << endl;
    }
    return 0;
}