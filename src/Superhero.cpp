#include <string>
#include <iostream>
#include "Superhero.h"

/*******************************************************
 * Superhero implementation file which houses all 
 * accessor and mutator methods
 * 
 * @author James Lund, William Shreeve
 * @version March 20, 2018
 */
	//Constructor for a superhero
	SuperHero::SuperHero(){
	}
	
	//Destructor for a superhero
	//Blank because we do not need to manage memory 
	SuperHero::~SuperHero(){
	}
	
	//Mutator methods for superhero variables
	void SuperHero::setPageID(int i){
		page_id = i;
	}
	void SuperHero::setName(std::string n){
		name = n;
	}	
	void SuperHero::setUrlslug(std::string u){
		urlslug = u;
	}
	void SuperHero::setID(std::string i){
		id = i;
	}
	void SuperHero::setAlignment(std::string a){
		alignment = a;
	}
	void SuperHero::setEyeColor(std::string e){
		eye_color = e;
	}
	void SuperHero::setHairColor(std::string h){
		hair_color = h;
	}
	void SuperHero::setSex(std::string s){
		sex = s;
	}
	void SuperHero::setGsm(std::string g){
		gsm = g;
	}
	void SuperHero::setAlive(std::string a){
		alive = a;
	}
	void SuperHero::setAppearances(int a){
		appearances = a;
	}
	void SuperHero::setFirstAppearance(std::string f){
		first_appearance = f;
	}
	void SuperHero::setYear(int y){
		year = y;
	}
		
	//Accessor methods for superhero variables
	int SuperHero::getPageID(){
		return page_id;
	}
	std::string SuperHero::getName() const{
		return name;
	}
	std::string SuperHero::getUrlslug(){
		return urlslug;
	}
	std::string SuperHero::getID(){
		return id;
	}
	std::string SuperHero::getAlignment(){
		return alignment;
	}
	std::string SuperHero::getEyeColor(){
		return eye_color;
	}
	std::string SuperHero::getHairColor(){
		return hair_color;
	}
	std::string SuperHero::getSex(){
		return sex;
	}
	std::string SuperHero::getGsm(){
		return gsm;
	}
	std::string SuperHero::getAlive(){
		return alive;
	}
	int SuperHero::getAppearance(){
		return appearances;
	}
	std::string SuperHero::getFirstAppearance(){
		return first_appearance;
	}
	int SuperHero::getYear(){
		return year;
	}
	
	
			
