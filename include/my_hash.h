#ifndef MYHASH_H
#define MYHASH_H

#include <string>
#include <vector>
#include <iostream>
#include "Superhero.h"

class my_hash{
	
	private:
	
	//Hash map to store data
	//std::vector< std::vector<SuperHero> > hashMap(17011);

	//Hashes value.
	int hash(std::string sh){
		return 1;
	}
	
	//HashTable
	int tableSize;

	public:
	//Constructor
	my_hash(int tableSize){
	  //Hash map to store data
	  std::vector< std::vector<SuperHero> > hashMap(tableSize);	

	}
	//Destructor	
	~my_hash(){
		
	}

	bool insert(const Superhero & sh){
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
		int hash = hash(s.getName());
		int i;
		for(i = 0; i >= hashMap[hash].size()-1; i++){
			if(std::compare(name, hashMap[hash][i].getName()) == 0)
				return hashMap[hash][i];
		}
	}

};

#endif  //MYHASH_H
