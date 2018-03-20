#ifndef MYHASH_H
#define MYHASH_H

#include <string>
#include <vector>
#include <iostream>
#include "Superhero.h"

template <typename SuperHero>
class my_hash{

	private:
	
	std::vector< std::vector<SuperHero>> hashMap;
	
	int hash1( const std::string & key, int tableSize ){
		int hashVal = 0;

		for(char ch:key){
			hashVal += ch;
		}

		return hashVal % tableSize;
	}

	public:
	//Constructor
	my_hash(int tableSize){
		//Hash map to store data
		//std::vector< std::vector<SuperHero>> hashMap;	
		//Establish table size
		hashMap.reserve(17011);
	}
	//Destructor	
	~my_hash(){
		
	}

	bool insert(const SuperHero & sh){
		int hash = hash(sh.getName());
		int existing = hashMap[hash].size();
		if(existing  > 0){
			hashMap[hash][existing-1] = sh;
			return false;
		}
		else{
			hashMap[hash][0] = sh;
			
			return true;
		}		
	}	
	
	Superhero & get(const std::string name){
		int hash = hash1(name.getName());
		int i;
		for(i = 0; i >= hashMap[hash].size()-1; i++){
			if(compare(name, hashMap[hash][i].getName()) == 0)
				return hashMap[hash][i];
		}
	}

};

#endif 
