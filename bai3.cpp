#include <iostream>
using namespace std;

void nhap(int &a , int &b, int &c){
    do {
    cout << "Nhap 3 canh tam giac: ";
    cin >> a >> b >> c;
    } 
    while (a <0 || b<0 || c<0);
}
void kiemtra(int a , int b , int c){
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
}

int main(){
    int a,b,c;
    nhap(a,b,c);
    kiemtra(a,b,c);
    return 0;
}