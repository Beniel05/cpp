#include <iostream>
using namespace std;

void reverse_A_Number() {
    int a, initialValue, rev = 0;
    cin >> a;
    initialValue = a;
    
    while (a > 0) {
        int last_digit = a % 10; // Get the last digit
        rev = rev * 10 + last_digit; // Build the reversed number
        a /= 10; // Remove the last digit from a
    }
    cout << "Initial Value: " << initialValue << ", Reversed value: " << rev << endl;
}

void returnTheDigitsOfANumber(int num) {
    int initialValue, last_digit, totalDigits = 0;
    initialValue = num;

    if (num == 0) {
        totalDigits = 1;
    }

    while(num > 0) {
        last_digit = num % 10;
        totalDigits += 1;
        num /= 10;
    }

    cout << "Total digits of " << initialValue << " is: " << totalDigits << endl;
}

int main() {
    
    returnTheDigitsOfANumber(12301);
    reverse_A_Number();

    return 0;
}
