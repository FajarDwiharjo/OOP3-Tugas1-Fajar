#include <iostream>
using namespace std;

struct Rectangle {
    double a;
    double b;
};

double hitungLuas(const Rectangle &r) {
    return r.a * r.b;
}

int main() {
    double a, b;

    cout << "masukkan ukuran persegi dan pisahkan dengan spasi" << endl;
    cin >> a >> b;

    Rectangle rectangle = {a, b};

    double luas = hitungLuas(rectangle);
    cout << luas << endl;

    return 0;
}
