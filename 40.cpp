#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    
    bool setDate(int d, int m, int y) {
        if (m < 1 || m > 12 || d < 1 || d > 31) return false; 
        day = d;
        month = m;
        year = y;
        return true;
    }

    
    void displayDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date date;
    int d, m, y;

    cout << "Enter day, month, year: ";
    cin >> d >> m >> y;

    if (date.setDate(d, m, y))
        date.displayDate();
    else
        cout << "Invalid date!" << endl;

    return 0;
}
