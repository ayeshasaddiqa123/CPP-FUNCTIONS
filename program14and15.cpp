

// Write a program that inputs a five numbers and passes them to a function one at a time.The function returns true if he integer is even otherwise false.

#include <iostream> // a preprocessor directive that includes the iostream library
using namespace std; // allows us to use standard library names without the std:: prefix
// Function prototype
bool isEven(int number); // function declaration
// Main function
int main() {
    int numbers[5]; // array to hold five integers

    // Input five numbers from the user
    cout << "Enter five integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // Check each number and print whether it is even or not
    for (int i = 0; i < 5; i++) {
        if (isEven(numbers[i])) {
            cout << numbers[i] << " is even." << endl;
        } else {
            cout << numbers[i] << " is odd." << endl;
        }
    }

    return 0; // return statement indicating successful execution
}

// Function definition
bool isEven(int number) {
    return number % 2 == 0; // returns true if the number is even, false otherwise
}

/*
output:
Enter five integers: 1 2 3 4 5
1 is odd.
2 is even.
3 is odd.
4 is even.
5 is odd.
*/






// Write a program that prompts from user the coordinate points of two points x1, y1 and x2, y2 and passes them to a function that returns the distance between the two points.

#include <iostream> // a preprocessor directive that includes the iostream library
#include <cmath> // for sqrt function
using namespace std; // allows us to use standard library names without the std:: prefix

// Function prototype
double calculateDistance(double x1, double y1, double x2, double y2); // function declaration

// Main function
int main() {
    double x1, y1, x2, y2; // variables to hold the coordinates of the two points

    // Input coordinates from the user
    cout << "Enter coordinates of point 1 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates of point 2 (x2 y2): ";
    cin >> x2 >> y2;

    // Calculate and display the distance
    double distance = calculateDistance(x1, y1, x2, y2);
    cout << "The distance between the points is: " << distance << endl;

    return 0; // return statement indicating successful execution
}

// Function definition
double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // calculates the distance using the distance formula
}

/*
output:
Enter coordinates of point 1 (x1 y1): 1 2
Enter coordinates of point 2 (x2 y2): 4 6
The distance between the points is: 5
*/



