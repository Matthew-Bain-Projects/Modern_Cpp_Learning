#include "uniform_initialization.h"
#include <iostream>


void uniform_initialization::initExample(){
	int a; // uninitialized
	int a2 = 0; // copy initialization
	int a3(5); // Direct Initialization

	char b[5]; // uninitialized
	char b2[5] = {'a', 'b', 'c', 'd'}; // Aggregate Initialization

	/* Below this is an example of how we can initialize scalar and array types using the same syntax */

	int c1{}; //value initialization
	int c2{5}; // Direct Initialization
	char c3[10]{"Hello"}; // Direct Initialization

	std::cout << a2 << " " << b2  << " " << c2  << " " << c3 << std::endl;
}
