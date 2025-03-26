#include <iostream>
using namespace std;

class Rectangle {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double calculateArea() { return width * height; }
};

int main() {
    Rectangle rect(7, 3);
    cout << "Luas Persegi Panjang: " << rect.calculateArea() << endl;

    return 0;
}