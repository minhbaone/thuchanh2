#include <iostream>
using namespace std;


int main(){
    int a,b,c;
    do {
    cout << "Nhap 3 canh tam giac: ";
    cin >> a >> b >> c;
    } 
    while (a <0 || b<0 || c<0);
    if(a+b>c && b+c>a && a+c>b ){
        if( a==b && b==c){
            cout << "Day la tam gia deu";
        } else if( a==b || b==c || c==a){
            cout << "Day la tam giac can";
        } else if ( a*a == b*b + c*c || b*b == a*a + c*c || c*c == b*b +a*a ) {
            cout << "Day la tam giac vuong";
        }
         else {cout<< "Day la tam giac thuong" ;}
    } else {
        cout << "Do khong phai 3 canh cua tam giac!!!" ;
    }
    return 0;
}