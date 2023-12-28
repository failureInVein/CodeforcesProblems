#include <iostream>
using namespace std;
int main()
{
    int n,a;
    cin >> n;
    while(n--)
    {
        cin >> a;
        if(a<=6){
            cout << "NO" << endl;
        }
        else if (a==9){
            cout << "NO" << endl;
    }
        else if (a==12){
            cout << "YES" << endl;
            cout << "1 4 7" << endl;
        }
        else if(a%3==1){
            cout << "YES" << endl;
            cout << "1 2 " << a-3 << endl;
        }
        else if(a%3==2){
            cout << "YES" << endl;
            cout << "1 2 " << a-3 << endl;
        }
        else if(a%3==0){
            cout << "YES" << endl;
            cout << "2 5 " << a-7 << endl;
        }
    }
}
