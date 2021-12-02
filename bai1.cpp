#include <algorithm>
#include<iostream>

using namespace std;

int main() {
    int a,b,c,temp=0;
    cout << "Nhap lan luot 3 so: ";
    cin >> a>>b>>c;
    if(a>=b){
        temp =a;
        a=b;
        b=temp;
    }
    if(a>=c){
        temp =a;
        a=c;
        c=temp;
    }
    if(b>=c){
        temp =b;
        b=c;
        c=temp;
    }
    
    cout << "3 so tang dan la: " << a<< " " << b << " " << c ;
    return 0;
}