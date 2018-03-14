#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include "my_hash.h"

int main(int argc, char** argv){

	hash reader("NAME_OF_FILE.csv");

	//Get data from CSV file
	std::vector<std::string> > dataList = reader.getData();
	
	//Print content if needed
	for(std::vector<std::string> vec : dataList){
		for(std::string data : vec){
			std::cout<<data << " , ";
}
		std::cout<<std::endl;
}
	return 0;
}
