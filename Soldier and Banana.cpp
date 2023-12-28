#include<iostream>
using namespace std;
int main()
{
    int k,n,w,i,total=0,borrow,v;
    cin >> k >> n >> w;
    for(i=1;i<=w;i++)
    {
        v=k*i;
        total= total+v;
    }
    borrow = total-n;
    if(borrow<=0)
        cout << "0";
    else
        cout << borrow;
}
