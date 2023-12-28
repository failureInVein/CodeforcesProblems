#include <iostream>
using namespace std;
int main()
{
    string text;
    cin >> text;
    int x;
    for(x=0;x<text.size();x++){
        if(x==0){
            text[x]=toupper(text[x]);
        }
    }
    cout << text;
}
