#include <iostream>
using namespace std;
int main()
{
    int i,n,a;
    cin >> n >> a;
    string s;
    cin >> s;
    while(a--)
    {
        for(i=1;i<n;i++)
        {
            if(s[i]=='G' && s[i-1]=='B')
                {
                  s[i]='B';s[i-1]='G';i++;
                }
        }
    }
        cout << s;
}


