#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //took a string to input X++ or ++X
    int n,x=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        if(s == "++X" || s == "X++"){
            x=x+1;
        }
         else{
            x=x-1;
         }

    }
    cout << x;
    return 0;
}
