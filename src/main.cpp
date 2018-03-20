#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
#include <string>
#include <iostream>
#include <cstdlib>
#include "my_hash.h"
#include "Superhero.h"
#include "csv.h"    

/********************************************************************
 * Main returns the count of collisions from the given hash function
 *
 * @author James Lund, William Shreeve
 * @version March 20, 2018
 */
int main(int argc, char** argv){
	
	//Getting rid of warning messages for parameters..
	std::ignore = argc;
	std::ignore = argv;
	
	//Counter for collisions
	int count = 0;

	//Variables to record CSV Reader input
	//Changed bool and char variables to string for more reliable parsing
	int page_id;
        std::string name;
        std::string urlslug;
        std::string id;
        std::string alignment;
        std::string eye_color;
        std::string hair_color;
        std::string sex;
        std::string gsm;
        std::string alive;
        int appearances;
        std::string first_appearance;
        int year;
	
	//Declares hashMap
	my_hash hashMap;

	//Declare Superhero to read values into
	SuperHero s;

	/**********************************************************
 	 * CSV reader trims whitespace and extra ',' to better 
 	 * understand and read the marvel-wikia-data.csv file
 	 *
 	 * All headers are read in the in.read_header line
 	***********************************************************/
	io::CSVReader<13, io::trim_chars<' '>, io::double_quote_escape<',','\"'> > 
			in("src/marvel-wikia-data.csv");

	in.read_header(io::ignore_extra_column, "page_id", "name",
		 "urlslug", "ID", "ALIGN", "EYE", "HAIR", "SEX", 
		 "GSM", "ALIVE", "APPEARANCES", "FIRST APPEARANCE", "Year");
	
	//Loops through the file and inserts a superhero into the hashmap
	while(in.read_row(page_id, name, urlslug, id, alignment, 
		eye_color, hair_color, sex, gsm, alive, appearances,
		first_appearance, year)){
		//Assign values to s
		s.setPageID(page_id);
		s.setName(name);
		s.setUrlslug(urlslug);
		s.setID(id);
		s.setAlignment(alignment);
		s.setEyeColor(eye_color);
		s.setHairColor(hair_color);
		s.setSex(sex);
		s.setGsm(gsm);
		s.setAlive(alive);
		s.setAppearances(appearances);
		s.setFirstAppearance(first_appearance);
		s.setYear(year);
		//Insert into hashmap. If returns false, there is a collision
		if(hashMap.insert(s) == false){
			//Increment count if collision
			count++;
		}
	}	
	std::cout<< "Total collision count: " <<  count <<std::endl;
	return count;
}
