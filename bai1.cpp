#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c;
    cout << "Nhap lan luot  3 so: ";
    cin >> a>>b>> c;
    int a[10];
    for (int i=0 ; i<3; i++){
        a[i]=i;
    }
    sort (a , a+3);
    for(int i=0 ; i<3 ; i++){
        cout << a[i] << " ";
    }
    return 0;
}