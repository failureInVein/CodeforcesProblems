#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int scount=0;
    for(int i=0;i<s.size();i++){
            int j;
        for(j=0;j<i;j++){
            if(s[i]==s[j]){
                break;
            }
        }
        if(j==i){
            scount++;
        }
    }
    if(scount%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

}
