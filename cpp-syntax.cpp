#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

#define variable 5 // this is a preprocessor, variable is now globally available and its value is 5

int main(){
	// to print to the console, double quotes, requires iostream library and using namespace std
	cout << "foo is here\n";
	// another way
	cout << "bar is here" << endl;
	// another way using the printf function, requires stdio library
	printf("third way to print")

	bool true_or_false; // 1 bit
	cout << "sizeof int: " << sizeof(bool) << " bit" endl;

	short int n; // 2 bytes
	cout << "sizeof int: " << sizeof(short int) << " bytes" endl;

	int n; // 4 bytes
	cout << "sizeof int: " << sizeof(int) << " bytes" endl;	

	signed int n; // 4 bytes
	cout << "sizeof int: " << sizeof(signed int) << " bytes" endl;	

	long int n; // 8 bytes
	cout << "sizeof int: " << sizeof(long int) << " bytes" endl;

	unsigned long int n;// 8 bytes
	cout << "sizeof int: " << sizeof(unsigned long int) << " bytes" endl;

	signed long int n;// 8 bytes
	cout << "sizeof int: " << sizeof(signed long int) << " bytes" endl;

	float n;// 4 bytes
	cout << "sizeof int: " << sizeof(float) << " bytes" endl;

	double n;// 8 bytes
	cout << "sizeof int: " << sizeof(double) << " bytes" endl;

	char str;// 1 byte
	cout << "sizeof int: " << sizeof(char) << " bytes" endl;

	signed char str;// 1 byte
	cout << "sizeof int: " << sizeof(signed char) << " bytes" endl;

	unsigned char str;// 1 byte
	cout << "sizeof int: " << sizeof(unsigned char) << " bytes" endl;

	wchar_t n;// 4 bytes
	cout << "sizeof int: " << sizeof(wchar_t) << " bytes" endl;

	// when a character type exceeds size value in a loop, the result is infinite loop
	for(char n = 0; n < 300; n++){} // this is an infinite loop, char is never more than 255



	return 0;
}