#include <iostream>

using namespace std;

float Panjang, Lebar, Luas;
void prosedurHitungLuas(){
    Luas = Panjang * Lebar;
}

void prosedurInputData()
{
    cout << "Masukkan panjang = ";
    cin >> Panjang;
    cout << "Masukkan Lebar = ";
    cin >> Lebar;
}

void prosedurOutputData(){
    cout << "Luas persegi panjang = " << Luas;
}

int main(){
    prosedurInputData();
    prosedurHitungLuas();
    prosedurOutputData();
}