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








