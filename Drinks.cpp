#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i,a,c=0;
    float b;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a;
        c=c+a;
    }
    b=float(c)/n;
    cout << setprecision(11) << b;
}
