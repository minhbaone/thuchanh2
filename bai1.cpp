#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int a,b,c;
    cout << "Nhap lan luot  3 so: ";
    cin >> a>>b>> c;
    int a[10];
    for (int i=1 ; i<=3 ; i++){
        cin >> a[i];
    }
    sort ( a+1 ,a+ 3);
    return 0;
}