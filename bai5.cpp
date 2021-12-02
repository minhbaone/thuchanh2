#include <iostream>
using namespace std;

 int main(){
     int thang , nam ;
     do {
         cout<< "Nhap thang, nam: ";
        cin >> thang >> nam ;
     } while (thang <=0 || thang >12 || nam <=1975);
     switch (thang){
         case 1:
         case 3:
         case 5:
         case 7:
         case 8:
         case 10:
         case 12: 
         {
            cout << "Thang co 31 ngay";
            break;
         }
         case 4:
         case 6:
         case 9:
         case 11:
         {
             cout << "Thang co 30 ngay";
             break;
         }
         case 2:
         {
             if(nam % 100 == 0 ){
                 if(nam % 400 == 0) {
                     cout << "Thang co 29 ngay";
                 } else {
                     cout << "Thang co 28 ngay";
                 }
             } else if(nam % 4 == 0){
                 cout << "Thang co 29 ngay";
             } else {cout << "Thang co 28 ngay";}
         }
     }
     return 0;
 }