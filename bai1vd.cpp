#include <algorithm>
#include<iostream>

using namespace std;

int main() {
    int a[3];
    cout << "Nhap lan luot 3 so: ";
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort ( a , a+3);
    cout << "3 so thu tu tang dan la: ";
    for (int i=0 ; i<3 ; i++){
        cout << a[i] <<" ";
    }

    return 0;
}