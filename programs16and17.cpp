
// program 16


#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
double mul ( float f,int n ); // function prototype declaration
int main ()               // main function from where execution starts

{
	float f;
	int n;

    cout<<"Program to multiply a floating point number n times\n";
	cout<<"Enter floating point number : ";
	cin>>f;
	cout<<"Enter  number of times you want to multiply te floating number itself : ";
	cin>>n;
	
  double c=	mul(f,n);
  
  cout<<"The number after multiplicaton is :"<<c;;
   return 0; //return 0 to operating system
}   
// function to multiply a floating point number n times
 
 double mul (float f1,int n1)
 {
 	double pro=1.0;
 	for(int i=1;i<=n1;i++) {
 	pro = pro * f1;
 				
}
return pro;    // return the product

 }

 /*
 output:
Program to multiply a floating point number n times
Enter floating point number : 2.5
Enter  number of times you want to multiply te floating number itself : 3
The number after multiplicaton is :15.625
 */







// program 17

/* write a function that accepts a salary and returns the tax according to the following rules:
no tax gor first rs 1000
5% for second rs 1000
4% for third rs 1000
3% for remain untaxed salary
for example if the salary is  4000,  then the tax is 120
*/

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
double tax ( double salary ); // function prototype declaration
int main ()               // main function from where execution starts

{
	double salary;

	cout<<"Program to calculate tax on salary\n";
	cout<<"Enter your salary : ";
	cin>>salary;
	
  double c=	tax(salary);
  
  cout<<"The tax on your salary is :"<<c;
   return 0; //return 0 to operating system
}
// function to calculate tax on salary
 
 double tax (double salary1)
 {
 	double tax=0.0;
 	if(salary1<=1000) {
 		tax=0.0;
	 }
	 else if(salary1>1000 && salary1<=2000) {
	 	tax=(salary1-1000)*0.05;
	 }
	 else if(salary1>2000 && salary1<=3000) {
	 	tax=1000*0.05 + (salary1-2000)*0.04;
	 }
	 else if(salary1>3000) {
	 	tax=1000*0.05 + 1000*0.04 + (salary1-3000)*0.03;
	 }
	return tax;    // return the tax amount

	}

	/*
 output:
Program to calculate tax on salary
Enter your salary : 4000
The tax on your salary is :120
	*/