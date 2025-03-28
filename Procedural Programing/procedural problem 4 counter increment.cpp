#include <iostream>
using namespace std;

struct Counter {
    int count;
};

void initCounter(Counter &c) {
    c.count = 0;
}

void increment(Counter &c) {
    c.count++;
}

int getCount(const Counter &c) {
    return c.count;
}

void displayCount(const Counter &c) {
    cout << "hitungan sekarang = " << c.count << endl;
}

int main() {
    Counter counter;
    initCounter(counter);

    increment(counter);
    increment(counter);
    increment(counter);

    displayCount(counter);

    return 0;
}
