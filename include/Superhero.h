#ifndef Superhero
#define Superhero

#include <string>
#include <iostream>

class SuperHero {


	private:
		//Definition of a superhero
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
	public:
		SuperHero();
		~SuperHero();

		//Setter methods for all instance variables.
		void setPageID(int i);
		void setName(std::string n);
		void setUrlslug(std::string u);
		void setID(std::string i);
		void setAlignment(std::string a);
		void setEyeColor(std::string e);
		void setHairColor(std::string h);
		void setSex(std::string s);
		void setGsm(std::string g);
		void setAlive(std::string a);
		void setAppearances(int a);
		void setFirstAppearance(std::string f);
		void setYear(int y);

		//Getter methods for instance variables. 
		int getPageID();
		std::string getName() const;
		std::string getUrlslug();
		std::string getID();
		std::string getAlignment();
		std::string getEyeColor();
		std::string getHairColor();
		std::string getSex();
		std::string getGsm();
		std::string getAlive();
		int getAppearance();
		std::string getFirstAppearance();
		int getYear();
};

#endif
