#include <iostream>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    int i,n;
    for(i=0;i<s1.size()/2;i++)
    {
        swap(s1[i],s1[s1.size()-i-1]);
    }
    if(s1==s2){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
