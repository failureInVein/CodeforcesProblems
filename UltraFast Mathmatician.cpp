#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    string a,b;
    int i;
    cin >> a;
    cin >> b;
    int size = a.size();
    for(i=0;i<size;i++)
    {
        if(a[i] != b[i])
            cout << "1";
        else
            cout << "0";

    }
}
