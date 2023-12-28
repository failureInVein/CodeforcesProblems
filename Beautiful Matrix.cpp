/*#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                int a;
             cin >> a;
             if(a==1){
                cout << abs(3-i)+abs(3-j)<< endl;
             }
        }
}
return 0;
}*/

#include<iostream>
using namespace std;
int main()
{
int i,j,a;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
cin>>a;
if(a==1)
{
cout<< abs(i-2) + abs(j-2) <<endl;//As middle of a 5*5 matrix is 3
}
}
}
return 0;
}
