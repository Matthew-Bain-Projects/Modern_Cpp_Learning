#include <iostream>
#include <string>

#include "uniform_initialization.h"
#include "auto.h"
#include "ranged_based_for_loops.h"

int main(){
	uniform_initialization init;
	init.initExample();

	auto_init();

	rbfl_demo();

	std::cout << "Compiling All Knowledge" << std::endl;

	return 0;
}
