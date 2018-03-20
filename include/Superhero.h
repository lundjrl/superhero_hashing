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
		char eye_color;
		char hair_color;
		char sex;
		std::string gsm;
		bool alive;
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
		void setEyeColor(char e);
		void setHairColor(char h);
		void setSex(char s);
		void setGsm(char g);
		void setAlive(bool a);
		void setAppearances(int a);
		void setFirstAppearance(std::string f);
		void setYear(int y);

		//Getter methods for instance variables. 
		int getPageID();
		std::string getName() const;
		std::string getUrlslug();
		std::string getID();
		std::string getAlignment();
		char getEyeColor();
		char getHairColor();
		char getSex();
		std::string getGsm();
		bool getAlive();
		int getAppearance();
		std::string getFirstAppearance();
		int getYear();
};

#endif
