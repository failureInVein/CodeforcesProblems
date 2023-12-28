#include <iostream>
using namespace std;
int main()
{
    int i,a,k;
    cin >> a >> k;
    for(i=0;i<k;i++)
    {
        if(a%10 == 0)
            a=a/10;
        else if(a%10 != 0)
            a=a-1;
    }
    cout << a;
}
