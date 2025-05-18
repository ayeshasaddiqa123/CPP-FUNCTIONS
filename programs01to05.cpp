// Write a function tha converts a decimal number to binary.


#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespaced 
void decimal_to_binary(int a)
{
    if(a==0)
    cout<< "binary is 0";
     if(a==1)
    cout<<"binary is 1";

                string binary="";// declare a string variable to store binary number
            
            while(a>0)
            {
                int remainder=a%2;
                binary=to_string(remainder)+binary;  // convert the remainder to string and concatenate it to the binary string
                a=a/2;
            }
        cout<<"binary is "<<binary;
     

        }
int main ()               // main function from where execution starts
{
    int number;
    // declare a variable to store the decimal number
    cout<<"Enter a decimal number: ";

    // prompt the user to enter a decimal number
    cin>>number; // take input from user
    decimal_to_binary(number); // call the function
   return 0; //return 0 to operating system
}

/*
output:
Enter a decimal number: 10
binary is 1010
*/







// Write a function that converts a binary number to decimal.
#include <iostream> // include the iostream library (a preprocessor directive)
using namespace std; // use the stanadard namespaced
void binary_to_decimal(string binary) // function to convert binary to decimal
{
    int decimal = 0; // declare a variable to store the decimal number
    int base = 1; // declare a variable to store the base value

    // loop through the binary string in reverse order
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') { // if the character is '1'
            decimal += base; // add the base value to the decimal number
        }
        base *= 2; // multiply the base value by 2
    }
    cout << "Decimal is " << decimal; // print the decimal number
}

int main() // main function from where execution starts
{
    string binary; // declare a variable to store the binary number
    cout << "Enter a binary number: "; // prompt the user to enter a binary number
    cin >> binary; // take input from user
    binary_to_decimal(binary); // call the function
    return 0; //return 0 to operating system
}
/*
output:
Enter a binary number: 1010
Decimal is 10
*/





//write a function that counts number of zeros,odd and even numbers.

#include <iostream> // include the iostream library (a preprocessor directive)
using namespace std; // use the stanadard namespaced
void count_numbers (int a)
{
    int zeros,odd=0,even=0; // declare variables to store the count of zeros, odd and even numbers
    if(==0)
    {
        zeros++; // increment the count of zeros
    }
    else if(a%2==0)
    {
        even++; // increment the count of even numbers
    }
    else
    {
        odd++; // increment the count of odd numbers
    }
    cout<<"number of zeros are "<<zeros<<endl; // print the count of zeros
    cout<<"number of odd numbers are "<<odd<<endl; // print the count of odd numbers

    cout<<"number of even numbers are "<<even<<endl; // print the count of even numbers
    cout<<"total numbers are "<<zeros+odd+even<<endl; // print the total count of numbers
}// function to cout zeros, odd and even numbers
int main() // main function from where execution starts
{
    int number; // declare a variable to store the number
    cout << "Enter a number: "; // prompt the user to enter a number
    cin >> number; // take input from user
    count_numbers(number); // call the function
    return 0; //return 0 to operating system
}
/*
output:
Enter a number: 2
number of zeros are 0
number of odd numbers are 0
number of even numbers are 1
total numbers are 1
*/





// Write a function that prints triangle of stars.

#include <iostream> // include the iostream library (a preprocessor directive)
using namespace std; // use the stanadard namespaced
void print_triangle(int n) // function to print triangle of stars
{
    for (int i = 1; i <= n; i++) { // loop through the rows
        for (int j = 1; j <= i; j++) { // loop through the columns
            cout << "* "; // print star
        }
        cout << endl; // move to the next line
    }
}
int main()
{
    int a;
    cout<<"Enter a number of rows :";
    cin>>a;
    print_triangle( a);

}

/*
output:
Enter a number of rows :5
*
* *
* * *
* * * *
* * * * *

*/






// Write a function that prints the Fibonacci series.

#include <iostream> // include the iostream library (a preprocessor directive)
using namespace std; // use the stanadard namespaced
void fibonacci(int n) // function to print Fibonacci series
{
    int a = 0, b = 1, c; // declare variables to store the first two numbers of the series
    cout << a << " " << b << " "; // print the first two numbers
    for (int i = 2; i < n; i++) { // loop through the series
        c = a + b; // calculate the next number
        cout << c << " "; // print the next number
        a = b; // update the first number
        b = c; // update the second number
    }
}
int main() // main function from where execution starts
{
    int n; // declare a variable to store the number of terms
    cout << "Enter the number of terms: "; // prompt the user to enter the number of terms
    cin >> n; // take input from user
    fibonacci(n); // call the function
    return 0; //return 0 to operating system
}
/*
output:
Enter the number of terms: 10
0 1 1 2 3 5 8 13 21 34
*/
