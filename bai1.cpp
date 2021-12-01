#include <algorithm>
#include<iostream>

using namespace std;
void nhapso(int &a ,int &b, int &c){
    cout << "Nhap lan luot 3 so: ";
    cin >> a>>b>>c;
}
void sapxep(int &x , int &y){
    float temp=0;
    if(x>=y){
        temp =x;
        x=y;
        y=temp;
    }
}
int main() {
    int a,b,c;
    nhapso(a,b,c);
    sapxep(a,b);
    sapxep(a,c);
    sapxep(b,c);
    cout << "3 so tang dan la: " << a<< " " << b << " " << c ;
    return 0;
}