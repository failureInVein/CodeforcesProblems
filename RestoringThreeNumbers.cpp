#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e;
    cin >> a >>b >>c >>d;
    if(a > b  && a > c && a > d){
        cout << a -b <<" "<< a-c <<" " << a-d;
    }
    else if(b > a  && b > c && b > d){
        cout << b -a <<" " << b-c <<" " << b-d;
    }
    else if(c > a  && c > b && c > d){
        cout << c -a <<" "  << c-b <<" " << c-d;
    }
    else if(d > a  && d > b && d > c){
        cout << d -a <<" " << d-b <<" " << d-c;
    }

}