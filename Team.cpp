#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,cou=0;
    cin >> n ;
    for(int i=0;i<n;i++){
        cin >> a >> b >> c;
        int add=a+b+c;
        if(add>=2)
          cou++;
    }
    cout << cou;

}
