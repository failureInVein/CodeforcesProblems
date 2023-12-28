#include <iostream>
using namespace std;
int main()
{
    long long n,a;
    cin >> n;
    a=n/2;
    if(n==1)
        {
        cout << "-1";
        }
        else if(n==2)
            {
            cout << "1";
            }
        else if(n%2==0)
            {
            cout << a;
            }
        else if(n%2!=0)
        {
            cout << -(a+1);
        }
}
