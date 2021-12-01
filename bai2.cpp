#include <iostream>
#include <math.h>
using namespace std;

void nhap(float &a , float &b , float &c){
    // Phuong trinh ax^2+bx+c=0
    cout<< "Nhap lan luot a,b,c: ";
    cin >> a >> b >> c ;
}
void timno(float &a , float &b, float &c, float &delta){
    float x1,x2;
    if(a==0){
        cout << "Nghiem pt la: " << -c /b;
    }
    if( a!= 0 ){
        if (delta < 0) {
            cout << "Phuong trinh vo nghiem: ";
        } else if (delta ==0 ){
            cout << "Phuong trinh co nghiem kep x= " << -b / 2*a;
        } else {
            cout << "deta"<< delta << endl;
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            cout << "Phuong trinh co 2 nghiem x1= " << x1 << " va x2 = "<<x2;
        }
    }
}
int main(){
    float a,b,c,delta,x1,x2;
    nhap(a,b,c);
    delta = b*b - 4*a*c;
    timno(a,b,c,delta);
    return 0;
}