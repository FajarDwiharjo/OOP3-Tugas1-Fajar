#include<iostream>
using namespace std;

class Kalkulator{
private:
    double a, b;

    public:
    Kalkulator(double num1, double num2): a(num1), b(num2){}

    double penambahan(){
        return a + b;
    }
    double pengurangan(){
        return a - b;
    }
    double perkalian(){
        return a * b;
    }
    double pembagian(){
        if (b == 0){
            cout << "infinity";
            return 0;
        } else if (a == 0) {
            cerr << "error";
            return 0;
        }
        return a / b;
    }
};

int main(){
    double a, b;
    char operasi;

    cout << "masukkan dua angka yang ingin di kalkulasi dan pisahkan dengan spasi" << endl;
    cin >> a >> b;

    Kalkulator kalk(a,b);

    cout << "pilih operasi perhitungan + , - , * , /" << endl;
    cin >> operasi;

    switch (operasi){
        case '+': cout << "hasil = " << kalk.penambahan() << endl; break;
        case '-': cout << "hasil = " << kalk.pengurangan() << endl; break;
        case '*': cout << "hasil = " << kalk.perkalian() << endl; break;
        case '/': cout << "hasil = " << kalk.pembagian() << endl; break;
    
    }

    // kalkulator kalk = kalkulator(1,2);

    // cout << kalk.penambahan() << endl;
    // cout << kalk.pengurangan() << endl;
    // cout << kalk.perkalian() << endl;
    // cout << kalk.pembagian() << endl;

    return 0;
}

