#ifndef MYHASH_H
#define MYHASH_H

#include <string>
#include <vector>
#include <iostream>
#include "Superhero.h"

#define MAXSIZE 17011

/*********************************************************************
 * Hashing assignment provides insight to different hashing functions
 * and how those functions may give different numbers of collisions
 *
 * @author James Lund, William Shreeve
 * @version March 20, 2018
 */
class my_hash{
	
	private:

	//Double vector for storing hashmap values		
	std::vector<std::vector<SuperHero>> hashMap;
	
	/**************************************************************
 	 * Hashes the parameter passed string
 	 * "A simple hashing function"
 	 *  Found from page 195, Weiss
	 * @param Name to hash
	 * @return returns int of hashed name
 	 * ************************************************************/	
	int hashNum(std::string name){
		int hashVal = 0;
		for(char ch : name){
			hashVal += ch;
		}
		return hashVal % MAXSIZE;
	}	
		
	/***************************************************************
 	 *"Another possible hash function--not too good" 
	 * Found from page 195, Weiss
	 * Hashes the inputted string based on the first three characters
	 * @param Name to hash
	 * @return int of the first three characters in key
	 * *************************************************************/
	int hashFunc(std::string name){
		return (name[0] + 27 * name[1] + 729 * name[2]) % MAXSIZE;

	}

	/***************************************************************
         * "A hash routine for string objects"
 	 * Found from page 195, Weiss
 	 * Hashes the inputted string ("file")
 	 * @param Name to hash
 	 * @return returns int of hashed name modded by MAXSIZE
 	 *************************************************************/ 
	unsigned int goodHash(std::string name){
		unsigned int hashVal = 0;
		for(char ch : name){
			hashVal = 37 * hashVal + ch;
		} 
		return hashVal % MAXSIZE;
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
		//int hash = hashFunc(sh.getName());
		//int hash = goodHash(sh.getName());
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
		//int hash = hashFunc(name);
		//int hash = goodHash(name);
		for(size_t i = 0; i >= hashMap[hash].size()-1; i++){
			if(name.compare(hashMap[hash][i].getName()) == 0)
				return hashMap[hash][i];
		}
	}

	

};

#endif  //MYHASH_H
