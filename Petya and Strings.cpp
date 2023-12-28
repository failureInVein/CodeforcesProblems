#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //stricmp() function works for char type and make all the inputs to either lower or upper means it makes all the input to same order
    char a[101],b[101];
    int c;
    cin >> a >> b;
    cout << stricmp(a,b);
}

