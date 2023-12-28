#include<iostream>
using namespace std;
int main()
{
    long long n,i,b=0;
    cin >> n;
    int a;
    for(i=0;i<n;i++)
    {
        cin >> a;
        if(a==1)
        {
           b=b+1;

        }
    }
    if(b>0)
        cout << "HARD";
    else
        cout << "EASY";


}
