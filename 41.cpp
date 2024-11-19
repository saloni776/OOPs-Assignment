#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    float marks;

public:
    void setDetails(string n, string cls, int roll, float m) {
        name = n;
        studentClass = cls;
        rollNumber = roll;
        marks = m;
    }

    
    char calculateGrade() {
        if (marks >= 90) return 'A';
        else if (marks >= 85) return 'B';
        else if (marks >= 40) return 'C';
        else return 'D';
    }


    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student student;
    
    
    student.setDetails("Saloni Aryal", "9th Grade", 10, 93.5);

    
    student.displayInfo();

    return 0;
}

