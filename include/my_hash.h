
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <algorithm>

#ifndef MYHASH_H
#define MYHASH_H

class hash{

	std::string fileName;
	std::string delimeter;

public:
	hash(std::string filename, std::string delm = ",");
		fileName(filename), delimeter(delm){}

	//Function to grab data from a CSV file
	std::vector<std::vector<std::string> > getData();

	bool insert(const Superhero & s);

	Superhero & get(const std::string name);

};

/**
 *Parses through csv file line by line and returns to vector
 */
std::vector<std::vector<std::string> > hash::getData(){
	std::ifstream file(fileName);
	
	std::vector<std::vector<std::string> > dataList;

	std::string line = "";

	//Iterate each line and split superheros using delimeter
	while(getline(file, line)){
		std::vector<std::string> vec;
		boost::algorithm::split(vec, line, boost::is_any_of(delimeter));
		dataList.push_back(vec);
}
	file.close();
	
	return dataList;
}

#endif  //MYHASH_H
