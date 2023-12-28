#include <iostream>
using namespace std;
int main()
{
    int i,n,ant=0,dan=0;
    cin >> n;
    string s;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='A')
            ant++;
        else
            dan++;
    }
    if(ant>dan)
        cout << "Anton";
    else if(dan>ant)
        cout << "Danik";
    else
        cout << "Friendship";
}
