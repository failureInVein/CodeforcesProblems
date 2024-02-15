#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,a,b;
    cin >> n;
    while(n--){
       cin >> a >> b;
       if (b == (a*4)-2){
        cout << a*2 << endl;
       }
       else{
        if (b % 2 == 0){
           cout << b/2 << endl;
        }
        else if (b%2 != 0){
            cout << (b/2)+1 << endl;
        }
       }
    }
}