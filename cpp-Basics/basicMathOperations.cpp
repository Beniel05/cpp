#include <bits/stdc++.h> // this will include all the cpp packages
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

    // Cleaner Logic;

    /*
        int num = 12345, reversedNumber = 0, lastDigit;
        int n = num;

        while(n > 0) {
            lastDigit = n % 10;
            reversedNumber = reversedNumber * 10 + lastDigit;
            n /= 10;
        }

        cout << "Number: " << num << endl;
        cout << "Reversed: " << reversedNumber << endl;
    */

}

void returnTheDigitsOfANumber(int num) {
    int initialValue, totalDigits = 0;
    initialValue = num;

    if (num == 0) {
        totalDigits = 1;
    }

    while(num > 0) {
        totalDigits += 1;
        num /= 10;
    }

    cout << "Total digits of " << initialValue << " is: " << totalDigits << endl;
}

void totalDigitsUsingLog10(int n) {
    int totalDigits = (int)(log10(n) + 1);
    // log10( 4 digit value will be ) = 3.value so,
    // we need to add +1 to have the exact digit.
    cout << "Total digits of " << n << " is: " << totalDigits << endl;
}

void findArmstrongNumber(int n) {
    int org = n;
    int armV = 0;

    int temp = n;
    int digits = 0;
    
    while (temp != 0) { // to find the power
        digits++;
        temp /= 10;
    }

    while (n != 0) {
        int lastValue = n % 10;
        armV += pow(lastValue, digits);
        n /= 10;
    }

    if(org == armV) cout << org << " is an Armstrong Number." << endl;
    else cout << org << " is not an Armstrong Number." << endl;
}

void printAllDivisors(int num) {
    int n = num;
        
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    
    // returnTheDigitsOfANumber(12301);
    // reverse_A_Number();
    // totalDigitsUsingLog10(1234);
    // findArmstrongNumber(153);
    // findArmstrongNumber(9474);
    printAllDivisors(36);

    return 0;
}
