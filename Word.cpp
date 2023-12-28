#include<iostream>
using namespace std;
int main()
{
    int i,upper=0,lower=0;
    char ch;
    string s;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
           if(s[i]>='A' && s[i]<='Z'){
            upper++;
           }
            else
            {
                lower++;
            }
    }
    for(i=0;i<s.size();i++){

        if(upper>lower){
        ch = toupper(s[i]);
        cout << ch;
        }
        else if(upper==lower){
            ch = tolower(s[i]);
            cout << ch;
        }
        else{
                ch = tolower(s[i]);
            cout << ch;
        }
    }
}
