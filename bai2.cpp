#include <iostream>
#include <math.h>
using namespace std;


int main(){
    float a,b,c,delta,x1,x2;
    cout<< "Nhap lan luot a,b,c: ";
    cin >> a >> b >> c ;
    delta = b*b - 4*a*c;
    if(a==0){
        cout << "Nghiem pt la x = " << -c /b;
    }
    if( a!= 0 ){
        if (delta < 0) {
            cout << "Phuong trinh vo nghiem";
        } else if (delta ==0 ){
            cout << "Phuong trinh co nghiem kep x= " << -b / 2*a;
        } else {
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            cout << "Phuong trinh co 2 nghiem x1= " << x1 << " va x2 = "<<x2;
        }
    }
    return 0;
}