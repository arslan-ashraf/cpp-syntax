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

	// creating a single character, single quotes only
	char single_character = 'c';

	// creating a string, must be created with double quotes
	char str[] = "this is foo"

	// creating an array of int type
	int arr[] = {0,1,2,3,4,5};

	// creating an array of fixed size
	int arr[5] = {0, 1, 2, 3, 4};

	// pointer is created with an *, and it must be the same data type as the data its pointing to
	int * pointer = &arr; 

	// pointer is derefenced by * pointer to get the value
	cout << "The pointer is derefenced, the value at this pointer is " << * pointer << endl;

	// struct 
	struct Node {
		int key;
		Node *left;
		Node *right;
		Node *parent;
	};

	// function for allocating a node
	Node* newNode( int key ){
		Node* n = new Node;
		n->key = key;
		n->left = nullptr;
		n->right = nullptr;
		n->parent = nullptr;
		return n;
	}


	// setting up a class
	class Tree {

		// private variables and functions

	}
	return 0;
}