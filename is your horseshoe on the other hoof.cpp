#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,s[4],count=0,d=4;
    for(i=0;i<4;i++)
    {
        cin >> s[i];

    }
    sort(s,s+4);
    for(i=0;i<3;i++)
    {
        if(s[i]==s[i+1])
          count++;
    }
    cout << count;
        return 0;
}
