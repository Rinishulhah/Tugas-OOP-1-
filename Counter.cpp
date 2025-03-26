#include <iostream>
using namespace std;

class Counter {
private:
    int count;
public:
    Counter() : count(0) {}

    void increment() { count++; }
    int getCount() { return count; }
};

int main() {
    Counter counter;
    int incrementTimes = 5;

    for (int i = 0; i < incrementTimes; i++) {
        counter.increment();
    }

    cout << "Nilai Counter: " << counter.getCount() << endl;

    return 0;
}