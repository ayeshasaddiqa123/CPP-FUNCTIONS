
// Write a program that accepts two integers. Create a function that tells wether or not the first number is multiple of the second number.


#include <iostream> // include the iostream library (a preprocessor directive)
using namespace std; // use the stanadard namespaced
void is_multiple(int a, int b) // function to check if a is multiple of b
{
    if (a % b == 0) 
    { // check if a is divisible by b
        cout << a << " is a multiple of " << b << endl; // print the result
    } else {
        cout << a << " is not a multiple of " << b << endl; // print the result
    }
}


int main() // main function
{
    int a, b; // declare variables to store the two integers
    cout << "Enter two integers: "; // prompt the user for input
    cin >> a >> b; // read the two integers
    is_multiple(a, b); // call the function to check if a is multiple of b
    return 0; // return 0 to indicate successful completion
}

/*
output:
Enter two integers: 10 5
10 is a multiple of 5
*/
// Enter two integers: 10 3
// 10 is not a multiple of 3







// Write a program that accepts two integers. Create a function that that prints first number raised to the power of second number.
#include <iostream> // include the iostream library (a preprocessor directive)
using namespace std; // use the stanadard namespaced
void power(int a, int b) // function to calculate power
{
    int result = 1; // variable to store the result
    for (int i = 0; i < b; i++) { // loop through the exponent
        result *= a; // multiply the base with itself
    }
    cout << a << " raised to the power of " << b << " is " << result << endl; // print the result
}

int main() // main function
{
    int a, b; // declare variables to store the two integers

    cout << "Enter two integers: "; // prompt the user for input
    cin >> a >> b; // read the two integers

    power(a, b); // call the function to calculate power

    return 0; // return 0 to indicate successful completion
}
/*
output:
Enter two integers: 2 3
2 raised to the power of 3 is 8
*/