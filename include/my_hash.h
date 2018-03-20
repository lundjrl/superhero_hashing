#ifndef MYHASH_H
#define MYHASH_H

#include <string>
#include <vector>
#include <iostream>
#include "Superhero.h"

#define MAXSIZE 17011
class my_hash{
	
	private:
		
	std::vector<std::vector<SuperHero>> hashMap;
	
	/**************************************************************
 	 * Hashes the parameter passed string
	 * @param name to hash
	 * @return returns int of hashed name
 	 * ************************************************************/	
	int hashNum(std::string name){
		int hashVal = 0;
		for(size_t i = 0; i<name.length(); i++)
			hashVal = 37 * hashVal + name[i];
		hashVal %= MAXSIZE;
		if(hashVal<=0)
			hashVal += MAXSIZE;
		return hashVal;
	}	
		
	
	public:
	
	/**************************************************************
 	 * Constructor for hash map. Creates a hashmap of size MAXSIZE
 	 * filled with vectors of size 100 to hold superheroes. Reserves
 	 * required memory.
 	 * ************************************************************/
	my_hash(){
		hashMap.resize(MAXSIZE);
		int i;
		for(i = 0; i < MAXSIZE; i++){
			hashMap[i].reserve(100);
		}
	}
	/**************************************************************
 	 * Destructor method. It's empty, since we do not allocate
 	 * any memory dynamically.
 	 * ************************************************************/
	~my_hash(){
	}

	/**************************************************************
 	 * Inserts the passed superhero into the hashmap. Uses hashNum
	 * function to hash it.
	 * @param sh Superhero to insert into hashmap
	 * @return true if no collision, false if collision. 
 	 * ************************************************************/
	bool insert(const SuperHero & sh){
		int hash = hashNum(sh.getName());
		int existing = hashMap[hash].size();
		if(existing  > 0){
			hashMap[hash].push_back(sh);
			return false;
		}
		else{
			hashMap[hash].push_back(sh);
			return true;
		}		
	}	
	/**************************************************************
 	 * Gets and returns superhero with parameter's name.
	 * @param name of superhero to get
	 * @return superhero with matching name.
 	 * ************************************************************/
	SuperHero & get(const std::string name){
		int hash = hashNum(name);
		for(size_t i = 0; i >= hashMap[hash].size()-1; i++){
			if(name.compare(hashMap[hash][i].getName()) == 0)
				return hashMap[hash][i];
		}
	}

	

};

#endif  //MYHASH_H
