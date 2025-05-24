
//  Write a function lcm() that recieves two numbers and returns their least common multiple (LCM). The main function should prompt the user to enter two numbers and display the LCM.

#include <iostream>  // for cout, cin
using namespace std; // using standard namespace
// Function prototype
int lcm(int a, int b); // function to calculate least common multiple
// Main function
int main() {
    int a, b; // declare variables
    cout << "Enter two numbers: "; // prompt user for input
    cin >> a >> b; // read two numbers from user
    int result = lcm(a, b); // call the lcm function
    cout << "Least Common Multiple (LCM) of " << a << " and " << b << " is: " << result << endl; // output the LCM
    return 0; // return success
}
// Function definition
int lcm(int a, int b) {
    // Calculate LCM using the formula: LCM(a, b) = (a * b) / GCD(a, b)
    int gcd = 1; // variable to store greatest common divisor
    for (int i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) {
            gcd = i; // update gcd if i is a common divisor
        }
    }
    return (a * b) / gcd; // return the LCM
}
// Output:
// Enter two numbers: 12 15
// Least Common Multiple (LCM) of 12 and 15 is: 60  







// Write program that calls two functions draw_horizontal() and draw_vertical() to form a  rectangle.also write functions draw horizontal to draw two horizontal lines and draw vertical to draw two vertical lines.

#include <iostream>  // for cout, cin
using namespace std; // using standard namespace
// Function prototypes
void draw_horizontal(int width); // function to draw horizontal lines
void draw_vertical(int height); // function to draw vertical lines
// Main function

int main() {
    int width, height; // declare variables for width and height
    cout << "Enter width and height of the rectangle: "; // prompt user for input
    cin >> width >> height; // read width and height from user

    draw_horizontal(width); // call function to draw horizontal lines
    draw_vertical(height);   // call function to draw vertical lines
    draw_horizontal(width);  // call function to draw horizontal lines again

    return 0; // return success
}

// Function to draw horizontal lines
void draw_horizontal(int width) {
    for (int i = 0; i < width; ++i) {
        cout << "-"; // print horizontal line
    }
    cout << endl; // move to the next line
}
// Function to draw vertical lines
void draw_vertical(int height) {
    for (int i = 0; i < height - 2; ++i) { // -2 to leave space for horizontal lines
        cout << "-"; // print vertical line
        for (int j = 0; j < width - 2; ++j) {
            cout << " "; // print spaces in between vertical lines
        }
        cout << "-" << endl; // close the vertical line
    }
}
// Output:
/*
Enter width and height of the rectangle: 5 4
-----   // horizontal line
-   -   // vertical lines with spaces in between    
-   -
-----   // horizontal line
// Note: The rectangle will be drawn with the specified width and height.

*/





//write a program that that returns the smallest of three floating point numbers.

#include <iostream>  // for cout, cin
using namespace std; // using standard namespace
// Function prototype
float smallest(float a, float b, float c); // function to find the smallest of three numbers
// Main function
int main() {
    float a, b, c; // declare variables
    cout << "Enter three floating point numbers: "; // prompt user for input
    cin >> a >> b >> c; // read three numbers from user
    float result = smallest(a, b, c); // call the smallest function
    cout << "The smallest number is: " << result << endl; // output the smallest number
    return 0; // return success
}
// Function definition
float smallest(float a, float b, float c) {
    // Compare the three numbers and return the smallest
    if (a < b && a < c) {
        return a; // a is the smallest
    } else if (b < a && b < c) {
        return b; // b is the smallest
    } else {
        return c; // c is the smallest
    }
}
// Output:
// Enter three floating point numbers: 3.5 2.1 4.8
// The smallest number is: 2.1




 



