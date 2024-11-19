#include <iostream>
using namespace std;

class Triangle {
private:
    float side1, side2, side3;

public:
    
    void setSides(float s1, float s2, float s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    bool isEquilateral() {
        return (side1 == side2 && side2 == side3);
    }


    bool isIsosceles() {
        return (side1 == side2 || side2 == side3 || side1 == side3);
    }


    bool isScalene() {
        return (side1 != side2 && side2 != side3 && side1 != side3);
    }

   
    void displayType() {
        if (isEquilateral()) {
            cout << "The triangle is equilateral." << endl;
        } else if (isIsosceles()) {
            cout << "The triangle is isosceles." << endl;
        } else if (isScalene()) {
            cout << "The triangle is scalene." << endl;
        }
    }
};

int main() {
    Triangle triangle;
    float s1, s2, s3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> s1 >> s2 >> s3;
    triangle.setSides(s1, s2, s3);
    triangle.displayType();

    return 0;
}

