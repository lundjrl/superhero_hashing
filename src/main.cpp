#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include "my_hash.h"

//class hash{

  //      std::string fileName;
  //      std::string delimeter;

//public:
       // hash(std::string filename, std::string delm = ",");
      //          fileName(filename), delimeter(delm){}

        //Function to grab data from a CSV file
    //            std::vector<std::vector<std::string> > getData();
        
  //              bool insert(const Superhero & s);
        
//                Superhero & get(const std::string name);
        
//};

/**
 *  *Parses through csv file line by line and returns to vector
 *
 */
std::vector<std::vector<std::string>> parseCSV(string inputFileName);
        std::ifstream inputFile(inputFileName);

        std::vector<std::vector<std::string> > dataList;

        std::string line = "";     

int main(int argc, char** argv){

	hash reader("marvel-wikia-data.csv");

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
