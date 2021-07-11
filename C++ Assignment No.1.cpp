// Assignment No.1 by Ansbub

#include <iostream>
#include <string>
using namespace std;

int main()
{
// declaration and initialization of integer variables with cin and cout
int val_inum = 100;

	cout << "integer value is: " << val_inum << endl;
	
int inval;
	
	cout << "\ninput from user in the form of digits: ";
	cin >> inval;
	
	
// declaration and initialization of character variables with cin and cout
char letter = 'A';
	
	cout << " \ncharacter is: " << letter << endl;
	
char in_ltr;
	
	cout << "\nPress any key about alphabets: ";
	cin >> in_ltr;	 
// declaration and initialization of string variables with cin and cout
string type = "name";

	cout << "\nMy C++ Assignment" << endl;
	
// print poem by using header file <sting>

string s1("\n\n\t\ttwinkle, twinkle, little star,\n\t\tHow I wonder what you are!\n\t\tUp above the world so high,\n\t\tLike a diamond in the sky.");


	string s4(s1,0,121);
	cout << s4 << endl;
	

// declaration and initialization of float variables with cin and cout
float point = 23.56789;

	cout <<"\n\nFloating point Number: " << point << endl;
// After decimal point consider 4 digits only and with and without wraping
	
float check_wrap = 44.64444;

	cout << "Check it again: " << check_wrap << endl;
	
	
float in_pin;

	cout <<"Enter floating Number: " << endl;
	cin >> in_pin;	
	
	
// declaration and initialization of double variables with cin and cout
double line = 234343478292992;

	cout << "\ndouble is here: " << line << endl;
	
	return 0;
}


