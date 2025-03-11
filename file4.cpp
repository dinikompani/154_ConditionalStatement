#include <iostream>

using namespace std;

float fungsiHitungRerata(float x, float y){
    return (x + y) / 2;
}

string fungsiCekStatusKelulusan(float a){
    if (a >= 70){
        return "Lulus";
    }
    else{
        return "Gagal";
    }
}

int main(){
    //Numeric nNilai1, nNilai2, nRerata
    float Nilai1, Nilai2, Rerata;
    cout << "Masukkan Nilai 1 = ";
    cin >> Nilai1;
    cout << "Masukkan Nilai 2 = ";
    cin >> Nilai2;

    cout << "Status Kelulusan: " << fungsiCekStatusKelulusan(fungsiHitungRerata(Nilai1, Nilai2));
}