#include <iostream>
#include <string>
using namespace std;


string numberToWords(int num) {
    
    string ones[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

   
    if (num >= 0 && num < 10) {
        return ones[num];
    }
    // Handle numbers from 10 to 19
    else if (num >= 10 && num < 20) {
        return teens[num - 10];
    }
    // Handle numbers from 20 to 99
    else if (num >= 20 && num < 100) {
        int tenPart = num / 10; // Get the tens place
        int onePart = num % 10; // Get the ones place
        return tens[tenPart] + (onePart ? " " + ones[onePart] : ""); // Combine the words
    }
    return "Number out of range"; // Error message for numbers >= 100
}

int main() {
    int num;
    
    // Taking user input
    cout << "Enter a non-negative integer (0-99): ";
    cin >> num;

    // Check if the input is within the valid range
    if (num < 0 || num > 99) {
        cout << "Number out of range. Please enter a number between 0 and 99." << endl;
    } else {
        // Convert and display the number in words
        cout << "The number in words is: " << numberToWords(num) << endl;
    }

    return 0;
}


