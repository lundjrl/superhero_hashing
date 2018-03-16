
#include <string>
#include <iostream>

#ifdef MYHASH_H
#define MYHASH_H

class hash{

	public:
		Superhero(){
			page_ID = 0;
		}

		//Setter methods for all instance variables.
		void setPageID(int i){
			page_ID = i;
		}
		void setName(std::string n){
			name = n;
		}
		void setUrlslug(std::string u){
			urlslug = u;
		}
		void setID(std::string i){
			id = i;
		}
		void setAlignment(std::string a){
			alignment = a;
		}
		void setEyeColor(char e){
			eye_color = e;
		}
		void setHairColor(char h){
			hair_color = h;
		}
		void setSex(char s){
			sex = s;
		}
		void setGsm(char g){
			gsm = g;
		}
		void setAlive(bool a){
			alive = a;
		}
		void setAppearances(int a){
			appearances = a;
		}
		void setFirstAppearance(std::string f){
			first_appearance = f;
		}	
		void setYear(int y){
			year = y;
		}
	
		//Getter methods for instance variables. 
		int getPageID(){
			return page_id;
		}
		std::string getName(){
			return name;
		}
		std::string getUrlslug(){
			return urlslug;
		}
		std::string getID(){
			return id;
		}
		std::string getAlignment(){
			return alignment;
		}
		char getEyeColor(){
			return eye_color;
		}
		char getHairColor(){
			return hair_color;
		}
		char getSex(){
			return sex;
		}
		std::string getGsm(){
			return gsm;
		}
		bool getAlive(){
			return alive;
		}
		int getAppearance(){
			return appearance;
		}
		std::string getFirstAppearance(){
			return first_appearance;
		}
		int getYear(){
			return year;
		}
		
		
		
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
};

#endif
