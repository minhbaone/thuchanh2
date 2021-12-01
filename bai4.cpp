#include<iostream>
#include<math.h>

using namespace std;
float nhapkm( float &km){
    do {cout<< "Nhap so km: ";
    cin >> km;
    } while  (km<=0);
    return km;
}
void tinhtien(float km){
    if (km<=1) {
        cout <<"So tien phai tra: "<< long(15000*km) ;
    } else if(2<=km && km<=6){
        cout <<"So tien phai tra: "<< long(15000*1 + (km-1)*13500);
    } else if(km>=6  && km<=120){
        cout <<"So tien phai tra: " << long(15000*1 + 5*13500 + (km-6)*11000);
    } else {
        cout <<"So tien phai tra: " << long((15000*1 + 5*13500 + (km-6)*11000)*0.9) ;
    }
}
int main() {
    float km;
    nhapkm(km);
    tinhtien(km);
	return 0;
}
