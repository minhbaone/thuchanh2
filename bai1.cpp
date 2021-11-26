#include<iostream>
#include<algorithm>

using namespace std;

int nhapso(){
    int a,b,c;
    cout << "Nhap lan luot  3 so: ";
    cin >> a>>b>> c;
}
int sapxep(){
    int a[10];
    for (int i=1 ; i<=3 ; i++){
        cin >> a[i];
    }
    sort ( a+1 ,a+ 3);
}
int main() {
    nhapso();
    cout << a<<b<<c;
    sapxep();
    return 0;
}