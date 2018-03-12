
#include <string>
#include <iostream>
#include <cstdlib>
#include "my_hash.h"

int main(int argc, char** argv){

	int index;
	hash hashObj;
	index = hashObj.Hash("James");
	
	std::cout << "index = " << index << std::endl;
}
