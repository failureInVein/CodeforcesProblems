#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,a[100],j,m,m1;
    cin >> n;
    while (n--){
        cin >> j;
        for(i=0;i<j;i++){
            cin >> a[i];
            m = *min_element(a,a+j);
            m1 = *max_element(a,a+j);
        }
        cout << m1-m << endl;

    }  
}