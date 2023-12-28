#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[100],count=0;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
        for (int j=1;j<=n;j++) {
        if(a[j]>0 && a[j]>=a[k]){
            count=count+1;
        }
        }
    cout << count << endl;

}
