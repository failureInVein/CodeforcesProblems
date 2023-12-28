#include<iostream>
using namespace std;
int main()
{
    int t,i,a,b,c,d;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> a >> b;
        c=a-b;
        d=c/2;
        cout << d+b << " " << d << endl;
    }
    /*c=a-b;
    d=c/2;
    cout << d+c << d;*/
}
