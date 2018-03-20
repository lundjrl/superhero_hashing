#ifndef MYHASH_H
#define MYHASH_H

#include <string>
#include <vector>
#include <iostream>
#include "Superhero.h"

//typedef std::vector<Superhero > shVector;
class my_hash{
	
	private:
		
		std::vector<std::vector<SuperHero>> hashMap;
	
		int hashNum(std::string name){
			name = "wow";
			return 1;
		}	
		
	
	public:
	my_hash(){
	}
	~my_hash(){
	}

	bool insert(const SuperHero & sh){
		int hash = hashNum(sh.getName());
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
	
	SuperHero get(const std::string name){
		int hash = hashNum(name);
		int i;
		for(i = 0; i >= hashMap[hash].size()-1; i++){
			if(name.compare(hashMap[hash][i].getName()) == 0)
				return hashMap[hash][i];
		}
	}

	

};

#endif  //MYHASH_H
