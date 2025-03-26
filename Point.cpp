#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x, y;
public:
    Point(double x_val, double y_val) : x(x_val), y(y_val) {}

    double distanceFromOrigin() { return sqrt(x * x + y * y); }
};

int main() {
    Point point(6, 8);
    cout << "Jarak dari Titik Asal: " << point.distanceFromOrigin() << endl;

    return 0;
}