#include <iostream>
#include "ranged_based_for_loops.h"

void rbfl_demo(){
	int array[] = {1, 2, 3};
	for(int i : array){
		std::cout << i << std::endl;
	}

	for(int j = 0; j < 3; j++){
		std::cout << array[j] << std::endl;

	}
}
