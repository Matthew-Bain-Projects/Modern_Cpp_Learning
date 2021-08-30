#include "auto.h"
#include <iostream>

void auto_init(){
	auto i = 10;
	auto j = 15;
	auto sum = i + j;

	auto sum_int_float = i + 5.5f;
	std::cout << sum << " " << sum_int_float << std::endl;
}
