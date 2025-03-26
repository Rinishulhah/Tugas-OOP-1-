# C++ OOP Projects

Proyek ini berisi beberapa program sederhana yang dibuat dengan **C++** menggunakan konsep **Object-Oriented Programming (OOP)**. Setiap file memiliki fungsinya masing-masing dan dapat dikompilasi serta dijalankan secara terpisah.

##  Daftar Program

| No | Nama File        | Fungsi                                                     |
| -- | ---------------- | ---------------------------------------------------------- |
| 1  | `Calculator.cpp` | Kalkulator sederhana dengan operasi aritmatika.            |
| 2  | `Student.cpp`    | Menyimpan dan menampilkan informasi mahasiswa.             |
| 3  | `Rectangle.cpp`  | Menghitung luas persegi panjang.                           |
| 4  | `Counter.cpp`    | Menghitung jumlah tertentu dengan counter.                 |
| 5  | `Point.cpp`      | Menghitung jarak titik dari titik asal dalam koordinat 2D. |

---

## Calculator

 **Fungsi**: Melakukan operasi dasar seperti penjumlahan, pengurangan, perkalian, dan pembagian.

 **Kode:**

```cpp
#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }
    double divide(double a, double b) {
        if (b != 0) return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    
    cout << "Masukkan dua angka: ";
    cin >> num1 >> num2;
    
    cout << "Penjumlahan: " << calc.add(num1, num2) << endl;
    cout << "Pengurangan: " << calc.subtract(num1, num2) << endl;
    cout << "Perkalian: " << calc.multiply(num1, num2) << endl;
    cout << "Pembagian: " << calc.divide(num1, num2) << endl;
    
    return 0;
}
```

 **Input**:

```
10 5
```

 **Output**:

```
Penjumlahan: 15
Pengurangan: 5
Perkalian: 50
Pembagian: 2
```

---

##  Student

 **Kode:**

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string student_id;
    char grade;
public:
    void inputData() {
        cout << "Masukkan Nama: ";
        cin >> name;
        cout << "Masukkan ID: ";
        cin >> student_id;
        cout << "Masukkan Grade: ";
        cin >> grade;
    }
    void displayInfo() {
        cout << "Nama: " << name << ", ID: " << student_id << ", Grade: " << grade << endl;
    }
};

int main() {
    Student student;
    student.inputData();
    student.displayInfo();
    return 0;
}
```

 **Input**:

```
Rini
12345
A
```

 **Output**:

```
Nama: Rini, ID: 12345, Grade: A
```

---

##  Rectangle

 **Kode:**

```cpp
#include <iostream>
using namespace std;

class Rectangle {
private:
    double width, height;
public:
    void inputData() {
        cout << "Masukkan lebar: ";
        cin >> width;
        cout << "Masukkan tinggi: ";
        cin >> height;
    }
    double calculateArea() { return width * height; }
};

int main() {
    Rectangle rect;
    rect.inputData();
    cout << "Luas Persegi Panjang: " << rect.calculateArea() << endl;
    return 0;
}
```

 **Input**:

```
7 3
```

 **Output**:

```
Luas Persegi Panjang: 21
```

---

##  Counter

 **Kode:**

```cpp
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
    int incrementTimes;
    cout << "Masukkan jumlah kenaikan counter: ";
    cin >> incrementTimes;
    
    for (int i = 0; i < incrementTimes; i++) {
        counter.increment();
    }
    
    cout << "Nilai Counter: " << counter.getCount() << endl;
    return 0;
}
```

 **Input**:

```
5
```

 **Output**:

```
Nilai Counter: 5
```

---

##  Point

 **Kode:**

```cpp
#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x, y;
public:
    void inputData() {
        cout << "Masukkan koordinat x: ";
        cin >> x;
        cout << "Masukkan koordinat y: ";
        cin >> y;
    }
    double distanceFromOrigin() { return sqrt(x * x + y * y); }
};

int main() {
    Point point;
    point.inputData();
    cout << "Jarak dari Titik Asal: " << point.distanceFromOrigin() << endl;
    return 0;
}
```

 **Input**:

```
6 8
```

 **Output**:

```
Jarak dari Titik Asal: 10
```

---

##  Cara Menjalankan

Kompilasi dan jalankan setiap file secara terpisah dengan perintah:

```sh
   g++ -o calculator Calculator.cpp
   ./calculator
```

```sh
g++ -o student Student.cpp
./student
```

```sh
g++ -o rectangle Rectangle.cpp
./rectangle
```

```sh
g++ -o counter Counter.cpp
./counter
```

```sh
g++ -o point Point.cpp
./point
```

##  Penjelasan OOP

- **Encapsulation (Enkapsulasi):** Data dalam kelas bersifat privat dan hanya bisa diakses melalui metode yang disediakan.
- **Abstraction (Abstraksi):** Setiap kelas hanya menampilkan data yang relevan kepada pengguna.
- **Reusability (Dapat Digunakan Kembali):** Setiap kelas dapat digunakan kembali dalam program lain.

Dengan memahami proyek ini, Anda akan mendapatkan pemahaman dasar tentang OOP di C++. 
