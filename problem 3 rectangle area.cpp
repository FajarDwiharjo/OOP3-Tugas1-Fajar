#include<iostream>
using namespace std;

class Rectangle{
private:
    double a, b;

    public:
    Rectangle(double num1, double num2): a(num1), b(num2){}
    double luas(){
        return a * b;
    }
};

int main(){
    double a, b;

    cout << "masukkan ukuran persegi dan pisahkan dengan spasi" << endl;
    cin >> a >> b;

    Rectangle rectangle(a,b);

    rectangle.luas();

    // rectangle luas = rectangle(1,2);

    cout << rectangle.luas() << endl;
    return 0;
}

