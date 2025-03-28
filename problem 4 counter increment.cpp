#include <iostream>
using namespace std;

class Counter{
    private:
        int count;
        public:
        
        Counter(): count(0){}

        void increment(){
            count++;
        }
        int getCount() const {
            return count;
        }
        void displayCount() const {
            cout << "hitungan sekarang = " << count << endl;
        }
    };
    
    int main(){
        Counter counter;

        counter.increment();
        counter.increment();
        counter.increment();
        
        counter.displayCount();

        return 0;
    }
