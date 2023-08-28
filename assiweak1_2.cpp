#include <iostream>
using namespace std;
int main()
{
    // question number 1
int x;
cout << "Enter first number\n";
cin >> x; // user will give ‘x’ a value.
int y, m;
cout << "Enter second number and value for taking modulus\n";
cin >> y >> m; // user will give ‘y’ a value.
int Z = (x * y) % m;
cout << "Output is: " << Z << endl;
// the output is 0

// question number 2
int a , b ;
cout <<"enter the value of a :" ;
cin >> a;
cout << "enter the value of b :" ;
cin >> b ;
cout << (a!=b) <<" "<< (a>=b) << endl;
// output is 1 and 0

// question number 3
int p , q ;
cin >> p >> q ;
p += q ;
p -= q ;
p %= q ;
cout << p << endl ;
// output is 2 

// questionb number 4
float pi = 3.14 ;
float radius , height ,volume ;
cout <<"enter the radius of cylander : ";
cin >> radius ;
cout << "enter the height of the cylander :";
cin >> height ;
volume = pi * radius * radius * height ;
cout << "the volume of cylander is ";
cout << volume << endl;
// output radius = 7 , height = 7 volume is 1077.02

// question number 5
char w = 'q' ;
int u ;
u = (int)w ;
cout << u << endl;
// the ascii value of q is 133
char z ;
cout << "enter z";
cin >> z ;
int e ;
e = (int)z;
cout << e <<endl;
// the ascii value of 7 is 55

// question number 6
int i = ( 4 + 7 / 5 * 6 * 6+9 )% 100 ;
cout << i ; 
// the output is 49 
}