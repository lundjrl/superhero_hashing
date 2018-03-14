#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include "my_hash.h"

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
 *  *Parses through csv file line by line and returns to vector
 *
 */
std::vector<std::vector<std::string> > hash::getData(){
        std::ifstream file(fileName);

        std::vector<std::vector<std::string> > dataList;

        std::string line = "";

        //Iterate each line and split superheros using delimeter
        while(getline(file, line)){
        	std::vector<std::string> vec;
                boost::algorithm::split(vec, line, boost::is_any_of(delimeter));                dataList.push_back(vec);
}
        file.close();
        
                                                                                return dataList;
                                                                                }
        

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
