#include <iostream>
using namespace std;
int main()
{
    int n,i,a,b,cou=0;
    cin >> n >> b;
    for(i=0;i<n;i++)
    {
        cin >> a;
        if(a>b){
            cou=cou+2;
        }
        else{
            cou=cou+1;
        }
    }
    cout << cou;

}
