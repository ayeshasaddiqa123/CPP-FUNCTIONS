
// Write a program that that uses a function eq() to find wether four integers a,b,c,d passed to the function satisfy the equation a^3+b^3+c^3=d^3.the function should return 0 if the above equation is satisfied and -1 otherwise.

#include <iostream>  // for cout, cin
using namespace std; // using standard namespace
// Function prototype
int eq(int a, int b, int c, int d); // function to check the equation
// Main function

int main() {
    int a, b, c, d; // declare variables
    cout << "Enter four integers: "; // prompt user for input
    cin >> a >> b >> c >> d; // read integers from user
    // Call the eq function and check the result
    if (eq(a, b, c, d) == 0) {
        cout << "The equation is satisfied." << endl; // output if equation is satisfied
    } else {
        cout << "The equation is not satisfied." << endl; // output if equation is not satisfied
    }
    return 0; // return success
}

// Function definition
int eq(int a, int b, int c, int d) {
    // Check if the equation a^3 + b^3 + c^3 = d^3 is satisfied
    if (a * a * a + b * b * b + c * c * c == d * d * d) {
        return 0; // return 0 if satisfied
    } else {
        return -1; // return -1 if not satisfied
    }
}

// Output:
// Enter four integers: 1 2 3 4
// The equation is not satisfied.
// Enter four integers: 1 2 3 6
// The equation is satisfied.





// The program that prompts a user to enter a number and reverse it.write a function reverse() to revese a number. the function should accept the number as an input parameter and  return the reversed number. the main function should display the reversed number.

 #include <iostream>  // for cout, cin
using namespace std; // using standard namespace
// Function prototype
int reverse(int num); // function to reverse a number
// Main function

int main() {
    int num; // declare variable
    cout << "Enter a number: "; // prompt user for input
    cin >> num; // read number from user
    int reversedNum = reverse(num); // call the reverse function
    cout << "Reversed number: " << reversedNum << endl; // output the reversed number
    return 0; // return success
}

// Function definition
int reverse(int num) {
    int reversed = 0; // variable to store the reversed number
    while (num > 0) { // loop until num is 0
        reversed = reversed * 10 + num % 10; // add last digit of num to reversed
        num /= 10; // remove last digit from num
    }
    return reversed; // return the reversed number
}
// Output:
// Enter a number: 12345
// Reversed number: 54321




// Write a program that inputs a number in main function and passes it to a function . The function displays the number wether is prime or not.

#include <iostream>  // for cout, cin
using namespace std; // using standard namespace
// Function prototype
bool isPrime(int num); // function to check if a number is prime

// Main function
int main() {
    int num; // declare variable
    cout << "Enter a number: "; // prompt user for input
    cin >> num; // read number from user
    // Call the isPrime function and check the result
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl; // output if prime
    } else {
        cout << num << " is not a prime number." << endl; // output if not prime
    }
    return 0; // return success
}

// Function definition
int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) { // check for factors
        if (num % i == 0) return 0; // not prime if divisible by i
    }
    return 1; // return true if prime
}

// Output:
// Enter a number: 7
// 7 is a prime number.
// Enter a number: 10
// 10 is not a prime number.