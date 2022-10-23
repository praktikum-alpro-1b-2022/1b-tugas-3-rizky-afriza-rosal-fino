#include <iostream>
#include <cmath>

using namespace std;
int main (){

    cout<<"---Menghitung Sisi Miring Segitiga Dengan Pyhtagoras---\n";
    int sisi_a, sisi_b;
    double sisi_miring_c;

    cout << "Masukkan panjang sisi tegak (a): ";
    cin >> sisi_a;
    cout << "Masukkan panjang sisi mendatar (b): ";
    cin >> sisi_b;

    sisi_miring_c = sqrt ((sisi_a*sisi_a) + (sisi_b*sisi_b));
    cout << "Panjang sisi miring (c): " << sisi_miring_c << "\n";
    cout << "============================================================\n";

    cout << "(2) Menghitung Nilai Akhir Mata Kuliah Alpro \n";
    float nilai_praktikum=75, nilai_UTS=70, nilai_UAS=88, nilai_akhir;
    char nilai_huruf;

    nilai_akhir = ((nilai_praktikum*0.2)+(nilai_UTS*0.3)+(nilai_UAS*0.5));

    if (nilai_akhir>=80)
            nilai_huruf='A';

    cout << "Nilai Akhir: "<< nilai_akhir << "\n";
    cout << "Nilai Huruf: "<< nilai_huruf << "\n";
    cout << "============================================================\n";

    cout << "(3) Menghitung Arus(I), Tegangan (V) dan Hambatan (R) \n";
    float I, V, R;

    cout << "a) Menghitung Arus (I) \n";
    cout << "Masukkan Nilai Tegangan (V): ";
    cin >> V;
    cout << "Masukkan Nilai Hambatan (R): ";
    cin >> R;

    I = V/R;
    cout << "Nilai Arus Listrik: " << I << "\n";
    cout << "\n";

    cout << "b) Menghitung Tegangan (V) \n";
    cout << "Masukkan Nilai Arus (I): ";
    cin >> I;
    cout << "Masukkan Nilai Hambatan (R): ";
    cin >> R;

    V = I*R;
    cout << "Nilai Tegangan Listrik: " << V << "\n";
    cout << "\n";

    cout << "c) Menghitung Hambatan (R) \n";
    cout << "Masukkan Nilai Tegangan (V): ";
    cin >> V;
    cout << "Masukkan Nilai Arus (I): ";
    cin >> I;

    R = V/I;
    cout << "Nilai Hambatan Listrik: " << R << "\n";
    cout << "============================================================\n";

    cout << "(4) Menghitung Rumus Y=bx^2 + 0.5x - c \n";
    float b = 25, x = 15, c = 20, hasil_akhir;

    hasil_akhir= b*(x*x) + (0.5*x) - c;
    cout << "Hasil Y = bx^2 + 0.5x - c adalah " << hasil_akhir << "\n";


}
