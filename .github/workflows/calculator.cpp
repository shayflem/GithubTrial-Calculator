#include <iostream>
#include <string>
using namspace std;

double a,b,c;  //variables (a & b) for the user's input and 'c' for the result
char choice;  //variable to choose operation

cout << "Enter the first value: " << endl;  
cin >> a;

cout << "Enter the second value: " << endl;
cin >> b;

cout << "Select a function to execute: " << endl;
cout << "A=Addition" << endl;
cout << "S=Subtraction" << endl;
cout << "D=Division" << endl;
cout << "M=Multiplication" << endl;
cin >> choice;

switch (choice)
{
case toupper A:
{
    c=a+b;
    cout << c << endl;}
    break;

case toupper S:
{
    c=a-b;
    cout << c << endl;}
    break;

case toupper D:
{
    c=a/b;
    cout << c << endl;}
    break;

case toupper M:
{
    c=a*b;
    cout << c << endl;}
    break;


default:
cout << "Invalid Choice" << endl;
    break;
}


return 0;
