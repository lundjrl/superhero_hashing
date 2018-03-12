
#include <string>
#include <iostream>

#ifdef MYHASH_H
#define MYHASH_H

class hash{

	private:
		int tableSize;
		
		//Definition of a superhero
		struct Superhero{
			int page_id;
			std::string name;
			std::string urlslug;
			std::string id;
			std::string alignment;
			char eye_color;
			char hair_color;
			char sex;
			std::string gsm;
			bool alive;
			int appearances;
			std::string first_appearance;
			int year;
};

#endif
