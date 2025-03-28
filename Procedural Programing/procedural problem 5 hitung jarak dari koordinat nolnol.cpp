#include <iostream>
#include <cmath>
using namespace std;

struct Koordinat {
    int x;
    int y;
};

double hitungJarak(const Koordinat &k) {
    return sqrt(k.x * k.x + k.y * k.y);
}

int main() {
    int coordX2, coordY2;

    cout << "berikan koordinat titik ke 2 x (spasi) y" << endl;
    cin >> coordX2 >> coordY2;

    Koordinat titik = {coordX2, coordY2};

    double jarak = hitungJarak(titik);

    cout << "jarak koordinat dari (0,0) adalah = " << jarak << endl;
    return 0;
}
