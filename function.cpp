#include <iostream>
using namespace std;

// this is function mencari luas balok
int balok(int p, int l, int t){
    int hasil = p*l*t;
    return hasil;
}
// this is function mencari luas lingkaran
float lingkaran(float phi, int r){
    float hasil = phi * r * r;
    return hasil;
}
int main(){
    cout << balok(10, 5, 6) << endl;
    cout << lingkaran(3.14, 2) << endl;
}