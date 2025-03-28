#include <iostream>
#include <cmath>
using namespace std;

class Range{
    private:
        int x, y;
    
        public:
        Range(int coordX2, int coordY2): x(coordX2), y(coordY2){}
        double hitung(){
            return sqrt(x*x + y*y);
        }
    };

int main (){
    int coordX2, coordY2;

    cout << "berikan koordinat titik ke 2 x (spasi) y" << endl;
    cin >> coordX2 >> coordY2;

    Range range(coordX2,coordY2);

    range.hitung();

    cout << "jarak koordinat dari (0,0) adalah = " << range.hitung() << endl;
    return 0;
}
