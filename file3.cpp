#include <iostream>

using namespace std;

float Panjang, Lebar;

float fungsiHitungLuasBerparameter(float a, float b){
    return a * b;
}

int main()
{ 
    float Panjang, Lebar;
    cout << "Masukkan panjang = ";
    cin >> Panjang;
    cout << "Masukkan lebarnya = ";
    cin >> Lebar;
    cout << "Luas persegi panjang = " << fungsiHitungLuasBerparameter(Panjang, Lebar);

}