#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int add(int ,int );
int sub(int , int);
int mul(int ,int );
int div(int ,int);
int rem(int ,int);
int prime (int);
float area_of_square(float);
float perimeter_of_square(float);
int square(int);
int cube(int);


int main ()               // main function from where execution starts
{
	
     int op;
     cout<<"Enter 1 to perform all arithmetic operations on two numbers."<<endl<<endl;
     cout<<"Enter 2 to enter the 5 numbers in array and then searh the desired number from it."<<endl<<endl;
     cout<<"Enter 3 to find wether a number is prime orcomposite ."<<endl<<endl;
     cout<<"Enter 4 to find perimeter and area of square ."<<endl<<endl;
     cout<<"Enter 5 to find square and cube of anumber and then by adding them";
     cout<<"Enter your choice :";
     cin>>op;
     
     
     
     if(op==1)
     {
  		int a , b;
		cout << "Enter two numbers : ";
		cin >> a >> b;
	
	
   	 	 cout<<	"The addition of " <<a<<"and "<<b<<" is : "<<add(a,b ) <<endl;
		 cout<<	"The subtraction of " <<a<<"and "<<b<<" is : "<<sub(a,b ) <<endl;
		 cout<<	"The multiplication of " <<a<<"and "<<b<<" is : "<<mul(a,b ) <<endl;
		 cout<<	"The division of " <<a<<"and "<<b<<" is : "<<div(a,b ) <<endl;
		 cout<<	"The remainder of " <<a<<"and "<<b<<" is : "<<rem(a,b ) <<endl;
     }
     
     
     else if(op==2)
     {
     	int a;
     	int arr[5];
     	
     	cout<<"Enter numbers in array : ";
     	for(int i=0;i<=4;i++) {
     		cin>>arr[i];
}
		int c;
 		int loc=-1;
     	
     	cout<<"Enter a number to search in array : ";
     	cin>>a;
     	     	for(int i=0;i<=4;i++) 
     	
		  if (arr[i]==a)
		{
		   loc=i;
		   break;
		}
	      
	      if (loc==-1)
	     		 cout<<"Number not found ";
		  
		  else
		 		 cout<<"Number is found in array : "<< a<<"at"<<loc; 
	 }
	 
	 
	 
	 else if (op==3)
	 {
	 	int a;
	 	cout<<"Enter a number to check wether a number is prime or composite :";
	 	cin>>a;
	 	prime(a);
	 }
	 
	 
	 
	 
	 else if (op==4)
	   {
	 	float len;
	 	cout << "Enter length to find area and perimeter of square :";
	 	cin >> len;
	 	
	 	cout<<"Area of square is :"<< area_of_square(len)<<endl;

	 	cout<<"Perimeter of square is :"<< perimeter_of_square(len)<<endl;
	   }
	 
	 
	 
	 else if (op==5)
	   {
	   	 int a,b,c,d;
	 	 cout<<"Enter two numbers :";
	 	 cin >> a>> b;
	 	 c=square(a);
	 	 d=cube(b);
	 	 cout<<"Sum of squres and cubes is :"<<c+d;
	 	 
	   }
	 
	
	
   return 0; //return 0 to operating system
}

int add(int x,int y )
{
	return x+y;
}
int sub(int x, int y)
{
	return x-y;
}
int mul(int x ,int y)
{
	return x*y;
}
int div(int x,int y)
{
	return x/y;
}
int rem(int x,int y)
{
	return x%y;
	
}


int prime (int a)
{
	int p=1;
	for (int c=2;c<=a/2;c++)
	  if (a % c == 0)
	  {
	  	p=0;
	  	break;
	  }
	  if (p==1)
	  cout<<"Number is prime.";
	  else
	  cout<<"Number is composite.";
}


float area_of_square( float a)
{
	float area =a*a;
	return area;
	
}
float perimeter_of_square( float a)
{
    	float perimeter =4*a;
	return perimeter;
}
int square(int a)
{
	return a*a;
}
int cube(int a)
{
	return a *a*a;
}




// program 21

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
void AVG (int ,int);
int main ()               // main function from where execution starts
{
	int runs,balls;
	
	cout<<"Enter runs :";
	cin>>runs;
	cout<<"Enter balls";
	cin>>balls;
	
	AVG(runs,balls);
	
   return 0; //return 0 to operating system
}
void AVG (int r,int b)
{
cout<<"Averge score is :"	<< float ( r * 60) / b;
}



// program 22
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int digits (int);
int main ()               // main function from where execution starts
{
	int num;
	cout << "Enter a number to count its digit :";
	cin >> num;
	
   cout<<"Total digits in a number is :"<<digits(num); 
   
   return 0; //return 0 to operating system
}
int digits (int num)
{
	int dig=0;
	while(num!=0)
	{
		int num=num%10;
		
		dig++;
		num=num/10;
	 }
	 return dig;
}




// program 23
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int max(int arr[5]);
int main ()               // main function from where execution starts
{
	int arr[5];
	cout<<"Enter five numbers in array :";
	for(int i=0;i<5;i++) {
		cin>>arr[i];
}
cout<<"The maximum number in array is :"<<max(arr);

   return 0; //return 0 to operating system
}
int max(int arr[5])
{
	int maximum=arr[0];
  	for(int i=0;i<5;i++) {
		if(arr[i]>maximum)
		maximum=arr[i];
}	
return maximum;
}


// program 24

//write a program that gets two numbers one should be passed by Value and the other should be passed by reference and then check original variables wether their values are cangr or not usin c++

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
void passbyvalue(int);
void passbyreference(int &);
int main ()               // main function from where execution starts
{
	int a=10,b=20;
	cout<<"Before passing by value and reference :"<<endl;
	cout<<"a = "<<a<<", b = "<<b<<endl;
	
	passbyvalue(a);
	passbyreference(b);
	
	cout<<"After passing by value and reference :"<<endl;
	cout<<"a = "<<a<<", b = "<<b<<endl;

   return 0; //return 0 to operating system
}
void passbyvalue(int x)
{
	x=30; // this will not change the original variable
}
void passbyreference(int &y)
{
	y=40; // this will change the original variable
}

// output:
// Before passing by value and reference :
// a = 10, b = 20
// After passing by value and reference :
// a = 10, b = 40		

 

// program 25

 //a program that inputs a value pass it to function and that displays the prime factors of a given number
#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
void prime_factors(int);
int main ()               // main function from where execution starts
{
	int num;
	cout<<"Enter a number to find its prime factors :";
	cin>>num;
	
	prime_factors(num);
	
   return 0; //return 0 to operating system
}
void prime_factors(int n)
{
	cout << "Prime factors of " << n << " are: ";
	for (int i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			cout << i << " ";
			n /= i;
		}
	}
	cout << endl;
}			


