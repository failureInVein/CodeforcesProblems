#include<iostream>
using namespace std;
int main(){
    int n,i,a=0;
    cin>>n;
    string s;
    cin >> s;
    for(i=0;i<n;i++){
        if(s[i-1]==s[i])
        a++;
    }
    cout << a;



}
