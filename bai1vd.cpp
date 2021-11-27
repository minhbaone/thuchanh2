#include <algorithm>
#include<iostream>

using namespace std;
void nhapso(int &a ,int &b, int &c){
    cout << "Nhap lan luot 3 so: ";
    cin >> a>>b>>c;
}
void sapxep(){
    int a , b, c;
    nhapso(a,b,c);
    int arr[3]= {a,b,c};
    sort (arr , arr +3);
    cout << "3 so tang dan la: ";
	for (int i=0 ; i<3 ; i++){
        cout << arr[i] << " ";
    }
}
int main() {
    sapxep();
    return 0;
}