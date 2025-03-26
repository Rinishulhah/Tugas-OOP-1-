#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string student_id;
    char grade;
public:
    Student(string n, string id, char g) : name(n), student_id(id), grade(g) {}

    void displayInfo() {
        cout << "Nama: " << name << ", ID: " << student_id << ", Grade: " << grade << endl;
    }
};

int main() {
    Student student("Rini Shulhah", "12345", 'A');
    student.displayInfo();

    return 0;
}