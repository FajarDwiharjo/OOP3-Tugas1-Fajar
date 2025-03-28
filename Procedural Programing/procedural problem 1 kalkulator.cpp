#include<iostream>
using namespace std;

double penambahan(double a, double b) {
    return a + b;
}

double pengurangan(double a, double b) {
    return a - b;
}

double perkalian(double a, double b) {
    return a * b;
}

double pembagian(double a, double b) {
    if (b == 0) {
        cout << "infinity";
        return 0;
    } else if (a == 0) {
        cerr << "error";
        return 0;
    }
    return a / b;
}

int main() {
    double a, b;
    char operasi;

    cout << "masukkan dua angka yang ingin di kalkulasi dan pisahkan dengan spasi" << endl;
    cin >> a >> b;

    cout << "pilih operasi perhitungan + , - , * , /" << endl;
    cin >> operasi;

    switch (operasi) {
        case '+': cout << "hasil = " << penambahan(a, b) << endl; break;
        case '-': cout << "hasil = " << pengurangan(a, b) << endl; break;
        case '*': cout << "hasil = " << perkalian(a, b) << endl; break;
        case '/': cout << "hasil = " << pembagian(a, b) << endl; break;
        default: cout << "Operasi tidak dikenali" << endl;
    }

    return 0;
}
