#include<iostream>

using namespace std;

int main() {
    int n,sum=0;
    cin>>n;
    cout <<sum<<endl;
    for (int i=1 ; i<=n; i +=2){
        sum =sum +i;
    }
    cout<<sum;
    return 0;
}